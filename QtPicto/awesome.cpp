
#include "awesome.h"
#include <QDebug>
#include <QFile>
#include <QFontDatabase>

namespace picto {

static const QHash<QString, int> AwesomeHash = {
	{"fa_500px", awesome::fa_500px }, 
	{"address_book", awesome::address_book }, 
	{"address_book_o", awesome::address_book_o }, 
	{"address_card", awesome::address_card }, 
	{"address_card_o", awesome::address_card_o }, 
	{"adjust", awesome::adjust }, 
	{"adn", awesome::adn }, 
	{"align_center", awesome::align_center }, 
	{"align_justify", awesome::align_justify }, 
	{"align_left", awesome::align_left }, 
	{"align_right", awesome::align_right }, 
	{"amazon", awesome::amazon }, 
	{"ambulance", awesome::ambulance }, 
	{"american_sign_language_interpreting", awesome::american_sign_language_interpreting }, 
	{"anchor", awesome::anchor }, 
	{"android", awesome::android }, 
	{"angellist", awesome::angellist }, 
	{"angle_double_down", awesome::angle_double_down }, 
	{"angle_double_left", awesome::angle_double_left }, 
	{"angle_double_right", awesome::angle_double_right }, 
	{"angle_double_up", awesome::angle_double_up }, 
	{"angle_down", awesome::angle_down }, 
	{"angle_left", awesome::angle_left }, 
	{"angle_right", awesome::angle_right }, 
	{"angle_up", awesome::angle_up }, 
	{"apple", awesome::apple }, 
	{"archive", awesome::archive }, 
	{"area_chart", awesome::area_chart }, 
	{"arrow_circle_down", awesome::arrow_circle_down }, 
	{"arrow_circle_left", awesome::arrow_circle_left }, 
	{"arrow_circle_o_down", awesome::arrow_circle_o_down }, 
	{"arrow_circle_o_left", awesome::arrow_circle_o_left }, 
	{"arrow_circle_o_right", awesome::arrow_circle_o_right }, 
	{"arrow_circle_o_up", awesome::arrow_circle_o_up }, 
	{"arrow_circle_right", awesome::arrow_circle_right }, 
	{"arrow_circle_up", awesome::arrow_circle_up }, 
	{"arrow_down", awesome::arrow_down }, 
	{"arrow_left", awesome::arrow_left }, 
	{"arrow_right", awesome::arrow_right }, 
	{"arrow_up", awesome::arrow_up }, 
	{"arrows", awesome::arrows }, 
	{"arrows_alt", awesome::arrows_alt }, 
	{"arrows_h", awesome::arrows_h }, 
	{"arrows_v", awesome::arrows_v }, 
	{"asl_interpreting", awesome::asl_interpreting }, 
	{"assistive_listening_systems", awesome::assistive_listening_systems }, 
	{"asterisk", awesome::asterisk }, 
	{"at", awesome::at }, 
	{"audio_description", awesome::audio_description }, 
	{"automobile", awesome::automobile }, 
	{"backward", awesome::backward }, 
	{"balance_scale", awesome::balance_scale }, 
	{"ban", awesome::ban }, 
	{"bandcamp", awesome::bandcamp }, 
	{"bank", awesome::bank }, 
	{"bar_chart", awesome::bar_chart }, 
	{"bar_chart_o", awesome::bar_chart_o }, 
	{"barcode", awesome::barcode }, 
	{"bars", awesome::bars }, 
	{"bath", awesome::bath }, 
	{"bathtub", awesome::bathtub }, 
	{"battery", awesome::battery }, 
	{"battery_0", awesome::battery_0 }, 
	{"battery_1", awesome::battery_1 }, 
	{"battery_2", awesome::battery_2 }, 
	{"battery_3", awesome::battery_3 }, 
	{"battery_4", awesome::battery_4 }, 
	{"battery_empty", awesome::battery_empty }, 
	{"battery_full", awesome::battery_full }, 
	{"battery_half", awesome::battery_half }, 
	{"battery_quarter", awesome::battery_quarter }, 
	{"battery_three_quarters", awesome::battery_three_quarters }, 
	{"bed", awesome::bed }, 
	{"beer", awesome::beer }, 
	{"behance", awesome::behance }, 
	{"behance_square", awesome::behance_square }, 
	{"bell", awesome::bell }, 
	{"bell_o", awesome::bell_o }, 
	{"bell_slash", awesome::bell_slash }, 
	{"bell_slash_o", awesome::bell_slash_o }, 
	{"bicycle", awesome::bicycle }, 
	{"binoculars", awesome::binoculars }, 
	{"birthday_cake", awesome::birthday_cake }, 
	{"bitbucket", awesome::bitbucket }, 
	{"bitbucket_square", awesome::bitbucket_square }, 
	{"bitcoin", awesome::bitcoin }, 
	{"black_tie", awesome::black_tie }, 
	{"blind", awesome::blind }, 
	{"bluetooth", awesome::bluetooth }, 
	{"bluetooth_b", awesome::bluetooth_b }, 
	{"bold", awesome::bold }, 
	{"bolt", awesome::bolt }, 
	{"bomb", awesome::bomb }, 
	{"book", awesome::book }, 
	{"bookmark", awesome::bookmark }, 
	{"bookmark_o", awesome::bookmark_o }, 
	{"braille", awesome::braille }, 
	{"briefcase", awesome::briefcase }, 
	{"btc", awesome::btc }, 
	{"bug", awesome::bug }, 
	{"building", awesome::building }, 
	{"building_o", awesome::building_o }, 
	{"bullhorn", awesome::bullhorn }, 
	{"bullseye", awesome::bullseye }, 
	{"bus", awesome::bus }, 
	{"buysellads", awesome::buysellads }, 
	{"cab", awesome::cab }, 
	{"calculator", awesome::calculator }, 
	{"calendar", awesome::calendar }, 
	{"calendar_check_o", awesome::calendar_check_o }, 
	{"calendar_minus_o", awesome::calendar_minus_o }, 
	{"calendar_o", awesome::calendar_o }, 
	{"calendar_plus_o", awesome::calendar_plus_o }, 
	{"calendar_times_o", awesome::calendar_times_o }, 
	{"camera", awesome::camera }, 
	{"camera_retro", awesome::camera_retro }, 
	{"car", awesome::car }, 
	{"caret_down", awesome::caret_down }, 
	{"caret_left", awesome::caret_left }, 
	{"caret_right", awesome::caret_right }, 
	{"caret_square_o_down", awesome::caret_square_o_down }, 
	{"caret_square_o_left", awesome::caret_square_o_left }, 
	{"caret_square_o_right", awesome::caret_square_o_right }, 
	{"caret_square_o_up", awesome::caret_square_o_up }, 
	{"caret_up", awesome::caret_up }, 
	{"cart_arrow_down", awesome::cart_arrow_down }, 
	{"cart_plus", awesome::cart_plus }, 
	{"cc", awesome::cc }, 
	{"cc_amex", awesome::cc_amex }, 
	{"cc_diners_club", awesome::cc_diners_club }, 
	{"cc_discover", awesome::cc_discover }, 
	{"cc_jcb", awesome::cc_jcb }, 
	{"cc_mastercard", awesome::cc_mastercard }, 
	{"cc_paypal", awesome::cc_paypal }, 
	{"cc_stripe", awesome::cc_stripe }, 
	{"cc_visa", awesome::cc_visa }, 
	{"certificate", awesome::certificate }, 
	{"chain", awesome::chain }, 
	{"chain_broken", awesome::chain_broken }, 
	{"check", awesome::check }, 
	{"check_circle", awesome::check_circle }, 
	{"check_circle_o", awesome::check_circle_o }, 
	{"check_square", awesome::check_square }, 
	{"check_square_o", awesome::check_square_o }, 
	{"chevron_circle_down", awesome::chevron_circle_down }, 
	{"chevron_circle_left", awesome::chevron_circle_left }, 
	{"chevron_circle_right", awesome::chevron_circle_right }, 
	{"chevron_circle_up", awesome::chevron_circle_up }, 
	{"chevron_down", awesome::chevron_down }, 
	{"chevron_left", awesome::chevron_left }, 
	{"chevron_right", awesome::chevron_right }, 
	{"chevron_up", awesome::chevron_up }, 
	{"child", awesome::child }, 
	{"chrome", awesome::chrome }, 
	{"circle", awesome::circle }, 
	{"circle_o", awesome::circle_o }, 
	{"circle_o_notch", awesome::circle_o_notch }, 
	{"circle_thin", awesome::circle_thin }, 
	{"clipboard", awesome::clipboard }, 
	{"clock_o", awesome::clock_o }, 
	{"clone", awesome::clone }, 
	{"close", awesome::close }, 
	{"cloud", awesome::cloud }, 
	{"cloud_download", awesome::cloud_download }, 
	{"cloud_upload", awesome::cloud_upload }, 
	{"cny", awesome::cny }, 
	{"fa_code", awesome::fa_code }, 
	{"code_fork", awesome::code_fork }, 
	{"codepen", awesome::codepen }, 
	{"codiepie", awesome::codiepie }, 
	{"coffee", awesome::coffee }, 
	{"cog", awesome::cog }, 
	{"cogs", awesome::cogs }, 
	{"columns", awesome::columns }, 
	{"comment", awesome::comment }, 
	{"comment_o", awesome::comment_o }, 
	{"commenting", awesome::commenting }, 
	{"commenting_o", awesome::commenting_o }, 
	{"comments", awesome::comments }, 
	{"comments_o", awesome::comments_o }, 
	{"compass", awesome::compass }, 
	{"compress", awesome::compress }, 
	{"connectdevelop", awesome::connectdevelop }, 
	{"contao", awesome::contao }, 
	{"copy", awesome::copy }, 
	{"copyright", awesome::copyright }, 
	{"creative_commons", awesome::creative_commons }, 
	{"credit_card", awesome::credit_card }, 
	{"credit_card_alt", awesome::credit_card_alt }, 
	{"crop", awesome::crop }, 
	{"crosshairs", awesome::crosshairs }, 
	{"css3", awesome::css3 }, 
	{"cube", awesome::cube }, 
	{"cubes", awesome::cubes }, 
	{"cut", awesome::cut }, 
	{"cutlery", awesome::cutlery }, 
	{"dashboard", awesome::dashboard }, 
	{"dashcube", awesome::dashcube }, 
	{"database", awesome::database }, 
	{"deaf", awesome::deaf }, 
	{"deafness", awesome::deafness }, 
	{"dedent", awesome::dedent }, 
	{"delicious", awesome::delicious }, 
	{"desktop", awesome::desktop }, 
	{"deviantart", awesome::deviantart }, 
	{"diamond", awesome::diamond }, 
	{"digg", awesome::digg }, 
	{"dollar", awesome::dollar }, 
	{"dot_circle_o", awesome::dot_circle_o }, 
	{"download", awesome::download }, 
	{"dribbble", awesome::dribbble }, 
	{"drivers_license", awesome::drivers_license }, 
	{"drivers_license_o", awesome::drivers_license_o }, 
	{"dropbox", awesome::dropbox }, 
	{"drupal", awesome::drupal }, 
	{"edge", awesome::edge }, 
	{"edit", awesome::edit }, 
	{"eercast", awesome::eercast }, 
	{"eject", awesome::eject }, 
	{"ellipsis_h", awesome::ellipsis_h }, 
	{"ellipsis_v", awesome::ellipsis_v }, 
	{"empire", awesome::empire }, 
	{"envelope", awesome::envelope }, 
	{"envelope_o", awesome::envelope_o }, 
	{"envelope_open", awesome::envelope_open }, 
	{"envelope_open_o", awesome::envelope_open_o }, 
	{"envelope_square", awesome::envelope_square }, 
	{"envira", awesome::envira }, 
	{"eraser", awesome::eraser }, 
	{"etsy", awesome::etsy }, 
	{"eur", awesome::eur }, 
	{"euro", awesome::euro }, 
	{"exchange", awesome::exchange }, 
	{"exclamation", awesome::exclamation }, 
	{"exclamation_circle", awesome::exclamation_circle }, 
	{"exclamation_triangle", awesome::exclamation_triangle }, 
	{"expand", awesome::expand }, 
	{"expeditedssl", awesome::expeditedssl }, 
	{"external_link", awesome::external_link }, 
	{"external_link_square", awesome::external_link_square }, 
	{"eye", awesome::eye }, 
	{"eye_slash", awesome::eye_slash }, 
	{"eyedropper", awesome::eyedropper }, 
	{"fa", awesome::fa }, 
	{"facebook", awesome::facebook }, 
	{"facebook_f", awesome::facebook_f }, 
	{"facebook_official", awesome::facebook_official }, 
	{"facebook_square", awesome::facebook_square }, 
	{"fast_backward", awesome::fast_backward }, 
	{"fast_forward", awesome::fast_forward }, 
	{"fax", awesome::fax }, 
	{"feed", awesome::feed }, 
	{"female", awesome::female }, 
	{"fighter_jet", awesome::fighter_jet }, 
	{"file", awesome::file }, 
	{"file_archive_o", awesome::file_archive_o }, 
	{"file_audio_o", awesome::file_audio_o }, 
	{"file_code_o", awesome::file_code_o }, 
	{"file_excel_o", awesome::file_excel_o }, 
	{"file_image_o", awesome::file_image_o }, 
	{"file_movie_o", awesome::file_movie_o }, 
	{"file_o", awesome::file_o }, 
	{"file_pdf_o", awesome::file_pdf_o }, 
	{"file_photo_o", awesome::file_photo_o }, 
	{"file_picture_o", awesome::file_picture_o }, 
	{"file_powerpoint_o", awesome::file_powerpoint_o }, 
	{"file_sound_o", awesome::file_sound_o }, 
	{"file_text", awesome::file_text }, 
	{"file_text_o", awesome::file_text_o }, 
	{"file_video_o", awesome::file_video_o }, 
	{"file_word_o", awesome::file_word_o }, 
	{"file_zip_o", awesome::file_zip_o }, 
	{"files_o", awesome::files_o }, 
	{"film", awesome::film }, 
	{"filter", awesome::filter }, 
	{"fire", awesome::fire }, 
	{"fire_extinguisher", awesome::fire_extinguisher }, 
	{"firefox", awesome::firefox }, 
	{"first_order", awesome::first_order }, 
	{"flag", awesome::flag }, 
	{"flag_checkered", awesome::flag_checkered }, 
	{"flag_o", awesome::flag_o }, 
	{"flash", awesome::flash }, 
	{"flask", awesome::flask }, 
	{"flickr", awesome::flickr }, 
	{"floppy_o", awesome::floppy_o }, 
	{"folder", awesome::folder }, 
	{"folder_o", awesome::folder_o }, 
	{"folder_open", awesome::folder_open }, 
	{"folder_open_o", awesome::folder_open_o }, 
	{"fa_font", awesome::fa_font }, 
	{"font_awesome", awesome::font_awesome }, 
	{"fonticons", awesome::fonticons }, 
	{"fort_awesome", awesome::fort_awesome }, 
	{"forumbee", awesome::forumbee }, 
	{"forward", awesome::forward }, 
	{"foursquare", awesome::foursquare }, 
	{"free_code_camp", awesome::free_code_camp }, 
	{"frown_o", awesome::frown_o }, 
	{"futbol_o", awesome::futbol_o }, 
	{"gamepad", awesome::gamepad }, 
	{"gavel", awesome::gavel }, 
	{"gbp", awesome::gbp }, 
	{"ge", awesome::ge }, 
	{"gear", awesome::gear }, 
	{"gears", awesome::gears }, 
	{"genderless", awesome::genderless }, 
	{"get_pocket", awesome::get_pocket }, 
	{"gg", awesome::gg }, 
	{"gg_circle", awesome::gg_circle }, 
	{"gift", awesome::gift }, 
	{"git", awesome::git }, 
	{"git_square", awesome::git_square }, 
	{"github", awesome::github }, 
	{"github_alt", awesome::github_alt }, 
	{"github_square", awesome::github_square }, 
	{"gitlab", awesome::gitlab }, 
	{"gittip", awesome::gittip }, 
	{"glass", awesome::glass }, 
	{"glide", awesome::glide }, 
	{"glide_g", awesome::glide_g }, 
	{"globe", awesome::globe }, 
	{"google", awesome::google }, 
	{"google_plus", awesome::google_plus }, 
	{"google_plus_circle", awesome::google_plus_circle }, 
	{"google_plus_official", awesome::google_plus_official }, 
	{"google_plus_square", awesome::google_plus_square }, 
	{"google_wallet", awesome::google_wallet }, 
	{"graduation_cap", awesome::graduation_cap }, 
	{"gratipay", awesome::gratipay }, 
	{"grav", awesome::grav }, 
	{"group", awesome::group }, 
	{"h_square", awesome::h_square }, 
	{"hacker_news", awesome::hacker_news }, 
	{"hand_grab_o", awesome::hand_grab_o }, 
	{"hand_lizard_o", awesome::hand_lizard_o }, 
	{"hand_o_down", awesome::hand_o_down }, 
	{"hand_o_left", awesome::hand_o_left }, 
	{"hand_o_right", awesome::hand_o_right }, 
	{"hand_o_up", awesome::hand_o_up }, 
	{"hand_paper_o", awesome::hand_paper_o }, 
	{"hand_peace_o", awesome::hand_peace_o }, 
	{"hand_pointer_o", awesome::hand_pointer_o }, 
	{"hand_rock_o", awesome::hand_rock_o }, 
	{"hand_scissors_o", awesome::hand_scissors_o }, 
	{"hand_spock_o", awesome::hand_spock_o }, 
	{"hand_stop_o", awesome::hand_stop_o }, 
	{"handshake_o", awesome::handshake_o }, 
	{"hard_of_hearing", awesome::hard_of_hearing }, 
	{"hashtag", awesome::hashtag }, 
	{"hdd_o", awesome::hdd_o }, 
	{"header", awesome::header }, 
	{"headphones", awesome::headphones }, 
	{"heart", awesome::heart }, 
	{"heart_o", awesome::heart_o }, 
	{"heartbeat", awesome::heartbeat }, 
	{"history", awesome::history }, 
	{"home", awesome::home }, 
	{"hospital_o", awesome::hospital_o }, 
	{"hotel", awesome::hotel }, 
	{"hourglass", awesome::hourglass }, 
	{"hourglass_1", awesome::hourglass_1 }, 
	{"hourglass_2", awesome::hourglass_2 }, 
	{"hourglass_3", awesome::hourglass_3 }, 
	{"hourglass_end", awesome::hourglass_end }, 
	{"hourglass_half", awesome::hourglass_half }, 
	{"hourglass_o", awesome::hourglass_o }, 
	{"hourglass_start", awesome::hourglass_start }, 
	{"houzz", awesome::houzz }, 
	{"html5", awesome::html5 }, 
	{"i_cursor", awesome::i_cursor }, 
	{"id_badge", awesome::id_badge }, 
	{"id_card", awesome::id_card }, 
	{"id_card_o", awesome::id_card_o }, 
	{"ils", awesome::ils }, 
	{"image", awesome::image }, 
	{"imdb", awesome::imdb }, 
	{"inbox", awesome::inbox }, 
	{"indent", awesome::indent }, 
	{"industry", awesome::industry }, 
	{"info", awesome::info }, 
	{"info_circle", awesome::info_circle }, 
	{"inr", awesome::inr }, 
	{"instagram", awesome::instagram }, 
	{"institution", awesome::institution }, 
	{"internet_explorer", awesome::internet_explorer }, 
	{"intersex", awesome::intersex }, 
	{"ioxhost", awesome::ioxhost }, 
	{"italic", awesome::italic }, 
	{"joomla", awesome::joomla }, 
	{"jpy", awesome::jpy }, 
	{"jsfiddle", awesome::jsfiddle }, 
	{"key", awesome::key }, 
	{"keyboard_o", awesome::keyboard_o }, 
	{"krw", awesome::krw }, 
	{"language", awesome::language }, 
	{"laptop", awesome::laptop }, 
	{"lastfm", awesome::lastfm }, 
	{"lastfm_square", awesome::lastfm_square }, 
	{"leaf", awesome::leaf }, 
	{"leanpub", awesome::leanpub }, 
	{"legal", awesome::legal }, 
	{"lemon_o", awesome::lemon_o }, 
	{"level_down", awesome::level_down }, 
	{"level_up", awesome::level_up }, 
	{"life_bouy", awesome::life_bouy }, 
	{"life_buoy", awesome::life_buoy }, 
	{"life_ring", awesome::life_ring }, 
	{"life_saver", awesome::life_saver }, 
	{"lightbulb_o", awesome::lightbulb_o }, 
	{"line_chart", awesome::line_chart }, 
	{"link", awesome::link }, 
	{"linkedin", awesome::linkedin }, 
	{"linkedin_square", awesome::linkedin_square }, 
	{"linode", awesome::linode }, 
	{"fa_linux", awesome::fa_linux }, 
	{"list", awesome::list }, 
	{"list_alt", awesome::list_alt }, 
	{"list_ol", awesome::list_ol }, 
	{"list_ul", awesome::list_ul }, 
	{"location_arrow", awesome::location_arrow }, 
	{"lock", awesome::lock }, 
	{"long_arrow_down", awesome::long_arrow_down }, 
	{"long_arrow_left", awesome::long_arrow_left }, 
	{"long_arrow_right", awesome::long_arrow_right }, 
	{"long_arrow_up", awesome::long_arrow_up }, 
	{"low_vision", awesome::low_vision }, 
	{"magic", awesome::magic }, 
	{"magnet", awesome::magnet }, 
	{"mail_forward", awesome::mail_forward }, 
	{"mail_reply", awesome::mail_reply }, 
	{"mail_reply_all", awesome::mail_reply_all }, 
	{"male", awesome::male }, 
	{"map", awesome::map }, 
	{"map_marker", awesome::map_marker }, 
	{"map_o", awesome::map_o }, 
	{"map_pin", awesome::map_pin }, 
	{"map_signs", awesome::map_signs }, 
	{"mars", awesome::mars }, 
	{"mars_double", awesome::mars_double }, 
	{"mars_stroke", awesome::mars_stroke }, 
	{"mars_stroke_h", awesome::mars_stroke_h }, 
	{"mars_stroke_v", awesome::mars_stroke_v }, 
	{"maxcdn", awesome::maxcdn }, 
	{"meanpath", awesome::meanpath }, 
	{"medium", awesome::medium }, 
	{"medkit", awesome::medkit }, 
	{"meetup", awesome::meetup }, 
	{"meh_o", awesome::meh_o }, 
	{"mercury", awesome::mercury }, 
	{"microchip", awesome::microchip }, 
	{"microphone", awesome::microphone }, 
	{"microphone_slash", awesome::microphone_slash }, 
	{"minus", awesome::minus }, 
	{"minus_circle", awesome::minus_circle }, 
	{"minus_square", awesome::minus_square }, 
	{"minus_square_o", awesome::minus_square_o }, 
	{"mixcloud", awesome::mixcloud }, 
	{"mobile", awesome::mobile }, 
	{"mobile_phone", awesome::mobile_phone }, 
	{"modx", awesome::modx }, 
	{"money", awesome::money }, 
	{"moon_o", awesome::moon_o }, 
	{"mortar_board", awesome::mortar_board }, 
	{"motorcycle", awesome::motorcycle }, 
	{"mouse_pointer", awesome::mouse_pointer }, 
	{"music", awesome::music }, 
	{"navicon", awesome::navicon }, 
	{"neuter", awesome::neuter }, 
	{"newspaper_o", awesome::newspaper_o }, 
	{"object_group", awesome::object_group }, 
	{"object_ungroup", awesome::object_ungroup }, 
	{"odnoklassniki", awesome::odnoklassniki }, 
	{"odnoklassniki_square", awesome::odnoklassniki_square }, 
	{"opencart", awesome::opencart }, 
	{"openid", awesome::openid }, 
	{"opera", awesome::opera }, 
	{"optin_monster", awesome::optin_monster }, 
	{"outdent", awesome::outdent }, 
	{"pagelines", awesome::pagelines }, 
	{"paint_brush", awesome::paint_brush }, 
	{"paper_plane", awesome::paper_plane }, 
	{"paper_plane_o", awesome::paper_plane_o }, 
	{"paperclip", awesome::paperclip }, 
	{"paragraph", awesome::paragraph }, 
	{"paste", awesome::paste }, 
	{"pause", awesome::pause }, 
	{"pause_circle", awesome::pause_circle }, 
	{"pause_circle_o", awesome::pause_circle_o }, 
	{"paw", awesome::paw }, 
	{"paypal", awesome::paypal }, 
	{"pencil", awesome::pencil }, 
	{"pencil_square", awesome::pencil_square }, 
	{"pencil_square_o", awesome::pencil_square_o }, 
	{"percent", awesome::percent }, 
	{"phone", awesome::phone }, 
	{"phone_square", awesome::phone_square }, 
	{"photo", awesome::photo }, 
	{"picture_o", awesome::picture_o }, 
	{"pie_chart", awesome::pie_chart }, 
	{"pied_piper", awesome::pied_piper }, 
	{"pied_piper_alt", awesome::pied_piper_alt }, 
	{"pied_piper_pp", awesome::pied_piper_pp }, 
	{"pinterest", awesome::pinterest }, 
	{"pinterest_p", awesome::pinterest_p }, 
	{"pinterest_square", awesome::pinterest_square }, 
	{"plane", awesome::plane }, 
	{"play", awesome::play }, 
	{"play_circle", awesome::play_circle }, 
	{"play_circle_o", awesome::play_circle_o }, 
	{"plug", awesome::plug }, 
	{"plus", awesome::plus }, 
	{"plus_circle", awesome::plus_circle }, 
	{"plus_square", awesome::plus_square }, 
	{"plus_square_o", awesome::plus_square_o }, 
	{"podcast", awesome::podcast }, 
	{"power_off", awesome::power_off }, 
	{"fa_print", awesome::fa_print }, 
	{"product_hunt", awesome::product_hunt }, 
	{"puzzle_piece", awesome::puzzle_piece }, 
	{"qq", awesome::qq }, 
	{"qrcode", awesome::qrcode }, 
	{"question", awesome::question }, 
	{"question_circle", awesome::question_circle }, 
	{"question_circle_o", awesome::question_circle_o }, 
	{"quora", awesome::quora }, 
	{"quote_left", awesome::quote_left }, 
	{"quote_right", awesome::quote_right }, 
	{"ra", awesome::ra }, 
	{"random", awesome::random }, 
	{"ravelry", awesome::ravelry }, 
	{"rebel", awesome::rebel }, 
	{"recycle", awesome::recycle }, 
	{"reddit", awesome::reddit }, 
	{"reddit_alien", awesome::reddit_alien }, 
	{"reddit_square", awesome::reddit_square }, 
	{"refresh", awesome::refresh }, 
	{"registered", awesome::registered }, 
	{"remove", awesome::remove }, 
	{"renren", awesome::renren }, 
	{"reorder", awesome::reorder }, 
	{"repeat", awesome::repeat }, 
	{"reply", awesome::reply }, 
	{"reply_all", awesome::reply_all }, 
	{"resistance", awesome::resistance }, 
	{"retweet", awesome::retweet }, 
	{"rmb", awesome::rmb }, 
	{"road", awesome::road }, 
	{"rocket", awesome::rocket }, 
	{"rotate_left", awesome::rotate_left }, 
	{"rotate_right", awesome::rotate_right }, 
	{"rouble", awesome::rouble }, 
	{"rss", awesome::rss }, 
	{"rss_square", awesome::rss_square }, 
	{"rub", awesome::rub }, 
	{"ruble", awesome::ruble }, 
	{"rupee", awesome::rupee }, 
	{"s15", awesome::s15 }, 
	{"safari", awesome::safari }, 
	{"save", awesome::save }, 
	{"scissors", awesome::scissors }, 
	{"scribd", awesome::scribd }, 
	{"search", awesome::search }, 
	{"search_minus", awesome::search_minus }, 
	{"search_plus", awesome::search_plus }, 
	{"sellsy", awesome::sellsy }, 
	{"send", awesome::send }, 
	{"send_o", awesome::send_o }, 
	{"server", awesome::server }, 
	{"share", awesome::share }, 
	{"share_alt", awesome::share_alt }, 
	{"share_alt_square", awesome::share_alt_square }, 
	{"share_square", awesome::share_square }, 
	{"share_square_o", awesome::share_square_o }, 
	{"shekel", awesome::shekel }, 
	{"sheqel", awesome::sheqel }, 
	{"shield", awesome::shield }, 
	{"ship", awesome::ship }, 
	{"shirtsinbulk", awesome::shirtsinbulk }, 
	{"shopping_bag", awesome::shopping_bag }, 
	{"shopping_basket", awesome::shopping_basket }, 
	{"shopping_cart", awesome::shopping_cart }, 
	{"shower", awesome::shower }, 
	{"sign_in", awesome::sign_in }, 
	{"sign_language", awesome::sign_language }, 
	{"sign_out", awesome::sign_out }, 
	{"signal", awesome::signal }, 
	{"signing", awesome::signing }, 
	{"simplybuilt", awesome::simplybuilt }, 
	{"sitemap", awesome::sitemap }, 
	{"skyatlas", awesome::skyatlas }, 
	{"skype", awesome::skype }, 
	{"slack", awesome::slack }, 
	{"sliders", awesome::sliders }, 
	{"slideshare", awesome::slideshare }, 
	{"smile_o", awesome::smile_o }, 
	{"snapchat", awesome::snapchat }, 
	{"snapchat_ghost", awesome::snapchat_ghost }, 
	{"snapchat_square", awesome::snapchat_square }, 
	{"snowflake_o", awesome::snowflake_o }, 
	{"soccer_ball_o", awesome::soccer_ball_o }, 
	{"sort", awesome::sort }, 
	{"sort_alpha_asc", awesome::sort_alpha_asc }, 
	{"sort_alpha_desc", awesome::sort_alpha_desc }, 
	{"sort_amount_asc", awesome::sort_amount_asc }, 
	{"sort_amount_desc", awesome::sort_amount_desc }, 
	{"sort_asc", awesome::sort_asc }, 
	{"sort_desc", awesome::sort_desc }, 
	{"sort_down", awesome::sort_down }, 
	{"sort_numeric_asc", awesome::sort_numeric_asc }, 
	{"sort_numeric_desc", awesome::sort_numeric_desc }, 
	{"sort_up", awesome::sort_up }, 
	{"soundcloud", awesome::soundcloud }, 
	{"space_shuttle", awesome::space_shuttle }, 
	{"spinner", awesome::spinner }, 
	{"spoon", awesome::spoon }, 
	{"spotify", awesome::spotify }, 
	{"square", awesome::square }, 
	{"square_o", awesome::square_o }, 
	{"stack_exchange", awesome::stack_exchange }, 
	{"stack_overflow", awesome::stack_overflow }, 
	{"star", awesome::star }, 
	{"star_half", awesome::star_half }, 
	{"star_half_empty", awesome::star_half_empty }, 
	{"star_half_full", awesome::star_half_full }, 
	{"star_half_o", awesome::star_half_o }, 
	{"star_o", awesome::star_o }, 
	{"steam", awesome::steam }, 
	{"steam_square", awesome::steam_square }, 
	{"step_backward", awesome::step_backward }, 
	{"step_forward", awesome::step_forward }, 
	{"stethoscope", awesome::stethoscope }, 
	{"sticky_note", awesome::sticky_note }, 
	{"sticky_note_o", awesome::sticky_note_o }, 
	{"stop", awesome::stop }, 
	{"stop_circle", awesome::stop_circle }, 
	{"stop_circle_o", awesome::stop_circle_o }, 
	{"street_view", awesome::street_view }, 
	{"strikethrough", awesome::strikethrough }, 
	{"stumbleupon", awesome::stumbleupon }, 
	{"stumbleupon_circle", awesome::stumbleupon_circle }, 
	{"subscript", awesome::subscript }, 
	{"subway", awesome::subway }, 
	{"suitcase", awesome::suitcase }, 
	{"sun_o", awesome::sun_o }, 
	{"superpowers", awesome::superpowers }, 
	{"superscript", awesome::superscript }, 
	{"support", awesome::support }, 
	{"table", awesome::table }, 
	{"tablet", awesome::tablet }, 
	{"tachometer", awesome::tachometer }, 
	{"tag", awesome::tag }, 
	{"tags", awesome::tags }, 
	{"tasks", awesome::tasks }, 
	{"taxi", awesome::taxi }, 
	{"telegram", awesome::telegram }, 
	{"television", awesome::television }, 
	{"tencent_weibo", awesome::tencent_weibo }, 
	{"terminal", awesome::terminal }, 
	{"text_height", awesome::text_height }, 
	{"text_width", awesome::text_width }, 
	{"th", awesome::th }, 
	{"th_large", awesome::th_large }, 
	{"th_list", awesome::th_list }, 
	{"themeisle", awesome::themeisle }, 
	{"thermometer", awesome::thermometer }, 
	{"thermometer_0", awesome::thermometer_0 }, 
	{"thermometer_1", awesome::thermometer_1 }, 
	{"thermometer_2", awesome::thermometer_2 }, 
	{"thermometer_3", awesome::thermometer_3 }, 
	{"thermometer_4", awesome::thermometer_4 }, 
	{"thermometer_empty", awesome::thermometer_empty }, 
	{"thermometer_full", awesome::thermometer_full }, 
	{"thermometer_half", awesome::thermometer_half }, 
	{"thermometer_quarter", awesome::thermometer_quarter }, 
	{"thermometer_three_quarters", awesome::thermometer_three_quarters }, 
	{"thumb_tack", awesome::thumb_tack }, 
	{"thumbs_down", awesome::thumbs_down }, 
	{"thumbs_o_down", awesome::thumbs_o_down }, 
	{"thumbs_o_up", awesome::thumbs_o_up }, 
	{"thumbs_up", awesome::thumbs_up }, 
	{"ticket", awesome::ticket }, 
	{"times", awesome::times }, 
	{"times_circle", awesome::times_circle }, 
	{"times_circle_o", awesome::times_circle_o }, 
	{"times_rectangle", awesome::times_rectangle }, 
	{"times_rectangle_o", awesome::times_rectangle_o }, 
	{"tint", awesome::tint }, 
	{"toggle_down", awesome::toggle_down }, 
	{"toggle_left", awesome::toggle_left }, 
	{"toggle_off", awesome::toggle_off }, 
	{"toggle_on", awesome::toggle_on }, 
	{"toggle_right", awesome::toggle_right }, 
	{"toggle_up", awesome::toggle_up }, 
	{"trademark", awesome::trademark }, 
	{"train", awesome::train }, 
	{"transgender", awesome::transgender }, 
	{"transgender_alt", awesome::transgender_alt }, 
	{"trash", awesome::trash }, 
	{"trash_o", awesome::trash_o }, 
	{"tree", awesome::tree }, 
	{"trello", awesome::trello }, 
	{"tripadvisor", awesome::tripadvisor }, 
	{"trophy", awesome::trophy }, 
	{"truck", awesome::truck }, 
	{"fa_try", awesome::fa_try }, 
	{"tty", awesome::tty }, 
	{"tumblr", awesome::tumblr }, 
	{"tumblr_square", awesome::tumblr_square }, 
	{"turkish_lira", awesome::turkish_lira }, 
	{"tv", awesome::tv }, 
	{"twitch", awesome::twitch }, 
	{"twitter", awesome::twitter }, 
	{"twitter_square", awesome::twitter_square }, 
	{"umbrella", awesome::umbrella }, 
	{"underline", awesome::underline }, 
	{"undo", awesome::undo }, 
	{"universal_access", awesome::universal_access }, 
	{"university", awesome::university }, 
	{"unlink", awesome::unlink }, 
	{"unlock", awesome::unlock }, 
	{"unlock_alt", awesome::unlock_alt }, 
	{"unsorted", awesome::unsorted }, 
	{"upload", awesome::upload }, 
	{"usb", awesome::usb }, 
	{"usd", awesome::usd }, 
	{"user", awesome::user }, 
	{"user_circle", awesome::user_circle }, 
	{"user_circle_o", awesome::user_circle_o }, 
	{"user_md", awesome::user_md }, 
	{"user_o", awesome::user_o }, 
	{"user_plus", awesome::user_plus }, 
	{"user_secret", awesome::user_secret }, 
	{"user_times", awesome::user_times }, 
	{"users", awesome::users }, 
	{"vcard", awesome::vcard }, 
	{"vcard_o", awesome::vcard_o }, 
	{"venus", awesome::venus }, 
	{"venus_double", awesome::venus_double }, 
	{"venus_mars", awesome::venus_mars }, 
	{"viacoin", awesome::viacoin }, 
	{"viadeo", awesome::viadeo }, 
	{"viadeo_square", awesome::viadeo_square }, 
	{"video_camera", awesome::video_camera }, 
	{"vimeo", awesome::vimeo }, 
	{"vimeo_square", awesome::vimeo_square }, 
	{"vine", awesome::vine }, 
	{"vk", awesome::vk }, 
	{"volume_control_phone", awesome::volume_control_phone }, 
	{"volume_down", awesome::volume_down }, 
	{"volume_off", awesome::volume_off }, 
	{"volume_up", awesome::volume_up }, 
	{"warning", awesome::warning }, 
	{"wechat", awesome::wechat }, 
	{"weibo", awesome::weibo }, 
	{"weixin", awesome::weixin }, 
	{"whatsapp", awesome::whatsapp }, 
	{"wheelchair", awesome::wheelchair }, 
	{"wheelchair_alt", awesome::wheelchair_alt }, 
	{"wifi", awesome::wifi }, 
	{"wikipedia_w", awesome::wikipedia_w }, 
	{"window_close", awesome::window_close }, 
	{"window_close_o", awesome::window_close_o }, 
	{"window_maximize", awesome::window_maximize }, 
	{"window_minimize", awesome::window_minimize }, 
	{"window_restore", awesome::window_restore }, 
	{"windows", awesome::windows }, 
	{"won", awesome::won }, 
	{"wordpress", awesome::wordpress }, 
	{"wpbeginner", awesome::wpbeginner }, 
	{"wpexplorer", awesome::wpexplorer }, 
	{"wpforms", awesome::wpforms }, 
	{"wrench", awesome::wrench }, 
	{"xing", awesome::xing }, 
	{"xing_square", awesome::xing_square }, 
	{"y_combinator", awesome::y_combinator }, 
	{"y_combinator_square", awesome::y_combinator_square }, 
	{"yahoo", awesome::yahoo }, 
	{"yc", awesome::yc }, 
	{"yc_square", awesome::yc_square }, 
	{"yelp", awesome::yelp }, 
	{"yen", awesome::yen }, 
	{"yoast", awesome::yoast }, 
	{"youtube", awesome::youtube }, 
	{"youtube_play", awesome::youtube_play }, 
	{"youtube_square", awesome::youtube_square }, 
};

bool awesome::Provider::initialize() {

  static int fontId = -1;

  if (fontId < 0) {

    QFile res(":/fonts/fontawesome.ttf");

    if (!res.open(QIODevice::ReadOnly)) {
      qDebug() << "fontawesome.ttf font could not be read";
      return false;
    }

    QByteArray fontData(res.readAll());
    res.close();

    fontId = QFontDatabase::addApplicationFontFromData(fontData);
  }

  QStringList loadedFontFamilies =
      QFontDatabase::applicationFontFamilies(fontId);

  if (!loadedFontFamilies.empty()) {
    m_fontName = loadedFontFamilies.at(0);
  } else {
    qDebug() << "Font awesome font is empty?!" << "fontawesome.ttf";
    fontId = -1; // restore the font-awesome id
    return false;
  }


  return true;
}

QFont awesome::Provider::font(int size) {
	QFont font(m_fontName);
	font.setPixelSize(size);
	return font;
}

QString awesome::Provider::name(int code) {
	return AwesomeHash.key(code);
}

int awesome::Provider::code(const QString &name) {
	return AwesomeHash.value(name);
}

QString awesome::Provider::providerName() {
	return QString("awesome");
}

}