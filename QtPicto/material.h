#pragma once

#include "qtpicto.h"

namespace picto {

class material: public QObject {

    friend class Picto;

    Q_OBJECT

    class Provider : public PictoProvider {
        friend class material;
    public:
        
        virtual ~Provider () {}
        virtual bool initialize();
        virtual QFont font(int size);
        virtual QString name(int code);
        virtual int code(const QString &name);
        virtual QString providerName();

        

    private:
        Provider() {}
        
        QString m_fontName;

    };


public:
    enum icon { 
        ma_3d_rotation = 0xe84d, 
        ac_unit = 0xeb3b, 
        access_alarm = 0xe190, 
        access_alarms = 0xe191, 
        access_time = 0xe192, 
        accessibility = 0xe84e, 
        accessible = 0xe914, 
        account_balance = 0xe84f, 
        account_balance_wallet = 0xe850, 
        account_box = 0xe851, 
        account_circle = 0xe853, 
        adb = 0xe60e, 
        add = 0xe145, 
        add_a_photo = 0xe439, 
        add_alarm = 0xe193, 
        add_alert = 0xe003, 
        add_box = 0xe146, 
        add_circle = 0xe147, 
        add_circle_outline = 0xe148, 
        add_location = 0xe567, 
        add_shopping_cart = 0xe854, 
        add_to_photos = 0xe39d, 
        add_to_queue = 0xe05c, 
        adjust = 0xe39e, 
        airline_seat_flat = 0xe630, 
        airline_seat_flat_angled = 0xe631, 
        airline_seat_individual_suite = 0xe632, 
        airline_seat_legroom_extra = 0xe633, 
        airline_seat_legroom_normal = 0xe634, 
        airline_seat_legroom_reduced = 0xe635, 
        airline_seat_recline_extra = 0xe636, 
        airline_seat_recline_normal = 0xe637, 
        airplanemode_active = 0xe195, 
        airplanemode_inactive = 0xe194, 
        airplay = 0xe055, 
        airport_shuttle = 0xeb3c, 
        alarm = 0xe855, 
        alarm_add = 0xe856, 
        alarm_off = 0xe857, 
        alarm_on = 0xe858, 
        album = 0xe019, 
        all_inclusive = 0xeb3d, 
        all_out = 0xe90b, 
        android = 0xe859, 
        announcement = 0xe85a, 
        apps = 0xe5c3, 
        archive = 0xe149, 
        arrow_back = 0xe5c4, 
        arrow_downward = 0xe5db, 
        arrow_drop_down = 0xe5c5, 
        arrow_drop_down_circle = 0xe5c6, 
        arrow_drop_up = 0xe5c7, 
        arrow_forward = 0xe5c8, 
        arrow_upward = 0xe5d8, 
        art_track = 0xe060, 
        aspect_ratio = 0xe85b, 
        assessment = 0xe85c, 
        assignment = 0xe85d, 
        assignment_ind = 0xe85e, 
        assignment_late = 0xe85f, 
        assignment_return = 0xe860, 
        assignment_returned = 0xe861, 
        assignment_turned_in = 0xe862, 
        assistant = 0xe39f, 
        assistant_photo = 0xe3a0, 
        attach_file = 0xe226, 
        attach_money = 0xe227, 
        attachment = 0xe2bc, 
        audiotrack = 0xe3a1, 
        autorenew = 0xe863, 
        av_timer = 0xe01b, 
        backspace = 0xe14a, 
        backup = 0xe864, 
        battery_alert = 0xe19c, 
        battery_charging_full = 0xe1a3, 
        battery_full = 0xe1a4, 
        battery_std = 0xe1a5, 
        battery_unknown = 0xe1a6, 
        beach_access = 0xeb3e, 
        beenhere = 0xe52d, 
        block = 0xe14b, 
        bluetooth = 0xe1a7, 
        bluetooth_audio = 0xe60f, 
        bluetooth_connected = 0xe1a8, 
        bluetooth_disabled = 0xe1a9, 
        bluetooth_searching = 0xe1aa, 
        blur_circular = 0xe3a2, 
        blur_linear = 0xe3a3, 
        blur_off = 0xe3a4, 
        blur_on = 0xe3a5, 
        book = 0xe865, 
        bookmark = 0xe866, 
        bookmark_border = 0xe867, 
        border_all = 0xe228, 
        border_bottom = 0xe229, 
        border_clear = 0xe22a, 
        border_color = 0xe22b, 
        border_horizontal = 0xe22c, 
        border_inner = 0xe22d, 
        border_left = 0xe22e, 
        border_outer = 0xe22f, 
        border_right = 0xe230, 
        border_style = 0xe231, 
        border_top = 0xe232, 
        border_vertical = 0xe233, 
        branding_watermark = 0xe06b, 
        brightness_1 = 0xe3a6, 
        brightness_2 = 0xe3a7, 
        brightness_3 = 0xe3a8, 
        brightness_4 = 0xe3a9, 
        brightness_5 = 0xe3aa, 
        brightness_6 = 0xe3ab, 
        brightness_7 = 0xe3ac, 
        brightness_auto = 0xe1ab, 
        brightness_high = 0xe1ac, 
        brightness_low = 0xe1ad, 
        brightness_medium = 0xe1ae, 
        broken_image = 0xe3ad, 
        brush = 0xe3ae, 
        bubble_chart = 0xe6dd, 
        bug_report = 0xe868, 
        build = 0xe869, 
        burst_mode = 0xe43c, 
        business = 0xe0af, 
        business_center = 0xeb3f, 
        cached = 0xe86a, 
        cake = 0xe7e9, 
        call = 0xe0b0, 
        call_end = 0xe0b1, 
        call_made = 0xe0b2, 
        call_merge = 0xe0b3, 
        call_missed = 0xe0b4, 
        call_missed_outgoing = 0xe0e4, 
        call_received = 0xe0b5, 
        call_split = 0xe0b6, 
        call_to_action = 0xe06c, 
        camera = 0xe3af, 
        camera_alt = 0xe3b0, 
        camera_enhance = 0xe8fc, 
        camera_front = 0xe3b1, 
        camera_rear = 0xe3b2, 
        camera_roll = 0xe3b3, 
        cancel = 0xe5c9, 
        card_giftcard = 0xe8f6, 
        card_membership = 0xe8f7, 
        card_travel = 0xe8f8, 
        casino = 0xeb40, 
        cast = 0xe307, 
        cast_connected = 0xe308, 
        center_focus_strong = 0xe3b4, 
        center_focus_weak = 0xe3b5, 
        change_history = 0xe86b, 
        chat = 0xe0b7, 
        chat_bubble = 0xe0ca, 
        chat_bubble_outline = 0xe0cb, 
        check = 0xe5ca, 
        check_box = 0xe834, 
        check_box_outline_blank = 0xe835, 
        check_circle = 0xe86c, 
        chevron_left = 0xe5cb, 
        chevron_right = 0xe5cc, 
        child_care = 0xeb41, 
        child_friendly = 0xeb42, 
        chrome_reader_mode = 0xe86d, 
        ma_class = 0xe86e, 
        clear = 0xe14c, 
        clear_all = 0xe0b8, 
        close = 0xe5cd, 
        closed_caption = 0xe01c, 
        cloud = 0xe2bd, 
        cloud_circle = 0xe2be, 
        cloud_done = 0xe2bf, 
        cloud_download = 0xe2c0, 
        cloud_off = 0xe2c1, 
        cloud_queue = 0xe2c2, 
        cloud_upload = 0xe2c3, 
        ma_code = 0xe86f, 
        collections = 0xe3b6, 
        collections_bookmark = 0xe431, 
        color_lens = 0xe3b7, 
        colorize = 0xe3b8, 
        comment = 0xe0b9, 
        compare = 0xe3b9, 
        compare_arrows = 0xe915, 
        computer = 0xe30a, 
        confirmation_number = 0xe638, 
        contact_mail = 0xe0d0, 
        contact_phone = 0xe0cf, 
        contacts = 0xe0ba, 
        content_copy = 0xe14d, 
        content_cut = 0xe14e, 
        content_paste = 0xe14f, 
        control_point = 0xe3ba, 
        control_point_duplicate = 0xe3bb, 
        copyright = 0xe90c, 
        create = 0xe150, 
        create_new_folder = 0xe2cc, 
        credit_card = 0xe870, 
        crop = 0xe3be, 
        crop_16_9 = 0xe3bc, 
        crop_3_2 = 0xe3bd, 
        crop_5_4 = 0xe3bf, 
        crop_7_5 = 0xe3c0, 
        crop_din = 0xe3c1, 
        crop_free = 0xe3c2, 
        crop_landscape = 0xe3c3, 
        crop_original = 0xe3c4, 
        crop_portrait = 0xe3c5, 
        crop_rotate = 0xe437, 
        crop_square = 0xe3c6, 
        dashboard = 0xe871, 
        data_usage = 0xe1af, 
        date_range = 0xe916, 
        dehaze = 0xe3c7, 
        ma_delete = 0xe872, 
        delete_forever = 0xe92b, 
        delete_sweep = 0xe16c, 
        description = 0xe873, 
        desktop_mac = 0xe30b, 
        desktop_windows = 0xe30c, 
        details = 0xe3c8, 
        developer_board = 0xe30d, 
        developer_mode = 0xe1b0, 
        device_hub = 0xe335, 
        devices = 0xe1b1, 
        devices_other = 0xe337, 
        dialer_sip = 0xe0bb, 
        dialpad = 0xe0bc, 
        directions = 0xe52e, 
        directions_bike = 0xe52f, 
        directions_boat = 0xe532, 
        directions_bus = 0xe530, 
        directions_car = 0xe531, 
        directions_railway = 0xe534, 
        directions_run = 0xe566, 
        directions_subway = 0xe533, 
        directions_transit = 0xe535, 
        directions_walk = 0xe536, 
        disc_full = 0xe610, 
        dns = 0xe875, 
        do_not_disturb = 0xe612, 
        do_not_disturb_alt = 0xe611, 
        do_not_disturb_off = 0xe643, 
        do_not_disturb_on = 0xe644, 
        dock = 0xe30e, 
        domain = 0xe7ee, 
        done = 0xe876, 
        done_all = 0xe877, 
        donut_large = 0xe917, 
        donut_small = 0xe918, 
        drafts = 0xe151, 
        drag_handle = 0xe25d, 
        drive_eta = 0xe613, 
        dvr = 0xe1b2, 
        edit = 0xe3c9, 
        edit_location = 0xe568, 
        eject = 0xe8fb, 
        email = 0xe0be, 
        enhanced_encryption = 0xe63f, 
        equalizer = 0xe01d, 
        error = 0xe000, 
        error_outline = 0xe001, 
        euro_symbol = 0xe926, 
        ev_station = 0xe56d, 
        event = 0xe878, 
        event_available = 0xe614, 
        event_busy = 0xe615, 
        event_note = 0xe616, 
        event_seat = 0xe903, 
        exit_to_app = 0xe879, 
        expand_less = 0xe5ce, 
        expand_more = 0xe5cf, 
        ma_explicit = 0xe01e, 
        explore = 0xe87a, 
        exposure = 0xe3ca, 
        exposure_neg_1 = 0xe3cb, 
        exposure_neg_2 = 0xe3cc, 
        exposure_plus_1 = 0xe3cd, 
        exposure_plus_2 = 0xe3ce, 
        exposure_zero = 0xe3cf, 
        extension = 0xe87b, 
        face = 0xe87c, 
        fast_forward = 0xe01f, 
        fast_rewind = 0xe020, 
        favorite = 0xe87d, 
        favorite_border = 0xe87e, 
        featured_play_list = 0xe06d, 
        featured_video = 0xe06e, 
        feedback = 0xe87f, 
        fiber_dvr = 0xe05d, 
        fiber_manual_record = 0xe061, 
        fiber_new = 0xe05e, 
        fiber_pin = 0xe06a, 
        fiber_smart_record = 0xe062, 
        file_download = 0xe2c4, 
        file_upload = 0xe2c6, 
        filter = 0xe3d3, 
        filter_1 = 0xe3d0, 
        filter_2 = 0xe3d1, 
        filter_3 = 0xe3d2, 
        filter_4 = 0xe3d4, 
        filter_5 = 0xe3d5, 
        filter_6 = 0xe3d6, 
        filter_7 = 0xe3d7, 
        filter_8 = 0xe3d8, 
        filter_9 = 0xe3d9, 
        filter_9_plus = 0xe3da, 
        filter_b_and_w = 0xe3db, 
        filter_center_focus = 0xe3dc, 
        filter_drama = 0xe3dd, 
        filter_frames = 0xe3de, 
        filter_hdr = 0xe3df, 
        filter_list = 0xe152, 
        filter_none = 0xe3e0, 
        filter_tilt_shift = 0xe3e2, 
        filter_vintage = 0xe3e3, 
        find_in_page = 0xe880, 
        find_replace = 0xe881, 
        fingerprint = 0xe90d, 
        first_page = 0xe5dc, 
        fitness_center = 0xeb43, 
        flag = 0xe153, 
        flare = 0xe3e4, 
        flash_auto = 0xe3e5, 
        flash_off = 0xe3e6, 
        flash_on = 0xe3e7, 
        flight = 0xe539, 
        flight_land = 0xe904, 
        flight_takeoff = 0xe905, 
        flip = 0xe3e8, 
        flip_to_back = 0xe882, 
        flip_to_front = 0xe883, 
        folder = 0xe2c7, 
        folder_open = 0xe2c8, 
        folder_shared = 0xe2c9, 
        folder_special = 0xe617, 
        font_download = 0xe167, 
        format_align_center = 0xe234, 
        format_align_justify = 0xe235, 
        format_align_left = 0xe236, 
        format_align_right = 0xe237, 
        format_bold = 0xe238, 
        format_clear = 0xe239, 
        format_color_fill = 0xe23a, 
        format_color_reset = 0xe23b, 
        format_color_text = 0xe23c, 
        format_indent_decrease = 0xe23d, 
        format_indent_increase = 0xe23e, 
        format_italic = 0xe23f, 
        format_line_spacing = 0xe240, 
        format_list_bulleted = 0xe241, 
        format_list_numbered = 0xe242, 
        format_paint = 0xe243, 
        format_quote = 0xe244, 
        format_shapes = 0xe25e, 
        format_size = 0xe245, 
        format_strikethrough = 0xe246, 
        format_textdirection_l_to_r = 0xe247, 
        format_textdirection_r_to_l = 0xe248, 
        format_underlined = 0xe249, 
        forum = 0xe0bf, 
        forward = 0xe154, 
        forward_10 = 0xe056, 
        forward_30 = 0xe057, 
        forward_5 = 0xe058, 
        free_breakfast = 0xeb44, 
        fullscreen = 0xe5d0, 
        fullscreen_exit = 0xe5d1, 
        functions = 0xe24a, 
        g_translate = 0xe927, 
        gamepad = 0xe30f, 
        games = 0xe021, 
        gavel = 0xe90e, 
        gesture = 0xe155, 
        get_app = 0xe884, 
        gif = 0xe908, 
        golf_course = 0xeb45, 
        gps_fixed = 0xe1b3, 
        gps_not_fixed = 0xe1b4, 
        gps_off = 0xe1b5, 
        grade = 0xe885, 
        gradient = 0xe3e9, 
        grain = 0xe3ea, 
        graphic_eq = 0xe1b8, 
        grid_off = 0xe3eb, 
        grid_on = 0xe3ec, 
        group = 0xe7ef, 
        group_add = 0xe7f0, 
        group_work = 0xe886, 
        hd = 0xe052, 
        hdr_off = 0xe3ed, 
        hdr_on = 0xe3ee, 
        hdr_strong = 0xe3f1, 
        hdr_weak = 0xe3f2, 
        headset = 0xe310, 
        headset_mic = 0xe311, 
        healing = 0xe3f3, 
        hearing = 0xe023, 
        help = 0xe887, 
        help_outline = 0xe8fd, 
        high_quality = 0xe024, 
        highlight = 0xe25f, 
        highlight_off = 0xe888, 
        history = 0xe889, 
        home = 0xe88a, 
        hot_tub = 0xeb46, 
        hotel = 0xe53a, 
        hourglass_empty = 0xe88b, 
        hourglass_full = 0xe88c, 
        http = 0xe902, 
        https = 0xe88d, 
        image = 0xe3f4, 
        image_aspect_ratio = 0xe3f5, 
        import_contacts = 0xe0e0, 
        import_export = 0xe0c3, 
        important_devices = 0xe912, 
        inbox = 0xe156, 
        indeterminate_check_box = 0xe909, 
        info = 0xe88e, 
        info_outline = 0xe88f, 
        input = 0xe890, 
        insert_chart = 0xe24b, 
        insert_comment = 0xe24c, 
        insert_drive_file = 0xe24d, 
        insert_emoticon = 0xe24e, 
        insert_invitation = 0xe24f, 
        insert_link = 0xe250, 
        insert_photo = 0xe251, 
        invert_colors = 0xe891, 
        invert_colors_off = 0xe0c4, 
        iso = 0xe3f6, 
        keyboard = 0xe312, 
        keyboard_arrow_down = 0xe313, 
        keyboard_arrow_left = 0xe314, 
        keyboard_arrow_right = 0xe315, 
        keyboard_arrow_up = 0xe316, 
        keyboard_backspace = 0xe317, 
        keyboard_capslock = 0xe318, 
        keyboard_hide = 0xe31a, 
        keyboard_return = 0xe31b, 
        keyboard_tab = 0xe31c, 
        keyboard_voice = 0xe31d, 
        kitchen = 0xeb47, 
        label = 0xe892, 
        label_outline = 0xe893, 
        landscape = 0xe3f7, 
        language = 0xe894, 
        laptop = 0xe31e, 
        laptop_chromebook = 0xe31f, 
        laptop_mac = 0xe320, 
        laptop_windows = 0xe321, 
        last_page = 0xe5dd, 
        launch = 0xe895, 
        layers = 0xe53b, 
        layers_clear = 0xe53c, 
        leak_add = 0xe3f8, 
        leak_remove = 0xe3f9, 
        lens = 0xe3fa, 
        library_add = 0xe02e, 
        library_books = 0xe02f, 
        library_music = 0xe030, 
        lightbulb_outline = 0xe90f, 
        line_style = 0xe919, 
        line_weight = 0xe91a, 
        linear_scale = 0xe260, 
        link = 0xe157, 
        linked_camera = 0xe438, 
        list = 0xe896, 
        live_help = 0xe0c6, 
        live_tv = 0xe639, 
        local_activity = 0xe53f, 
        local_airport = 0xe53d, 
        local_atm = 0xe53e, 
        local_bar = 0xe540, 
        local_cafe = 0xe541, 
        local_car_wash = 0xe542, 
        local_convenience_store = 0xe543, 
        local_dining = 0xe556, 
        local_drink = 0xe544, 
        local_florist = 0xe545, 
        local_gas_station = 0xe546, 
        local_grocery_store = 0xe547, 
        local_hospital = 0xe548, 
        local_hotel = 0xe549, 
        local_laundry_service = 0xe54a, 
        local_library = 0xe54b, 
        local_mall = 0xe54c, 
        local_movies = 0xe54d, 
        local_offer = 0xe54e, 
        local_parking = 0xe54f, 
        local_pharmacy = 0xe550, 
        local_phone = 0xe551, 
        local_pizza = 0xe552, 
        local_play = 0xe553, 
        local_post_office = 0xe554, 
        local_printshop = 0xe555, 
        local_see = 0xe557, 
        local_shipping = 0xe558, 
        local_taxi = 0xe559, 
        location_city = 0xe7f1, 
        location_disabled = 0xe1b6, 
        location_off = 0xe0c7, 
        location_on = 0xe0c8, 
        location_searching = 0xe1b7, 
        lock = 0xe897, 
        lock_open = 0xe898, 
        lock_outline = 0xe899, 
        looks = 0xe3fc, 
        looks_3 = 0xe3fb, 
        looks_4 = 0xe3fd, 
        looks_5 = 0xe3fe, 
        looks_6 = 0xe3ff, 
        looks_one = 0xe400, 
        looks_two = 0xe401, 
        loop = 0xe028, 
        loupe = 0xe402, 
        low_priority = 0xe16d, 
        loyalty = 0xe89a, 
        mail = 0xe158, 
        mail_outline = 0xe0e1, 
        map = 0xe55b, 
        markunread = 0xe159, 
        markunread_mailbox = 0xe89b, 
        memory = 0xe322, 
        menu = 0xe5d2, 
        merge_type = 0xe252, 
        message = 0xe0c9, 
        mic = 0xe029, 
        mic_none = 0xe02a, 
        mic_off = 0xe02b, 
        mms = 0xe618, 
        mode_comment = 0xe253, 
        mode_edit = 0xe254, 
        monetization_on = 0xe263, 
        money_off = 0xe25c, 
        monochrome_photos = 0xe403, 
        mood = 0xe7f2, 
        mood_bad = 0xe7f3, 
        more = 0xe619, 
        more_horiz = 0xe5d3, 
        more_vert = 0xe5d4, 
        motorcycle = 0xe91b, 
        mouse = 0xe323, 
        move_to_inbox = 0xe168, 
        movie = 0xe02c, 
        movie_creation = 0xe404, 
        movie_filter = 0xe43a, 
        multiline_chart = 0xe6df, 
        music_note = 0xe405, 
        music_video = 0xe063, 
        my_location = 0xe55c, 
        nature = 0xe406, 
        nature_people = 0xe407, 
        navigate_before = 0xe408, 
        navigate_next = 0xe409, 
        navigation = 0xe55d, 
        near_me = 0xe569, 
        network_cell = 0xe1b9, 
        network_check = 0xe640, 
        network_locked = 0xe61a, 
        network_wifi = 0xe1ba, 
        new_releases = 0xe031, 
        next_week = 0xe16a, 
        nfc = 0xe1bb, 
        no_encryption = 0xe641, 
        no_sim = 0xe0cc, 
        not_interested = 0xe033, 
        note = 0xe06f, 
        note_add = 0xe89c, 
        notifications = 0xe7f4, 
        notifications_active = 0xe7f7, 
        notifications_none = 0xe7f5, 
        notifications_off = 0xe7f6, 
        notifications_paused = 0xe7f8, 
        offline_pin = 0xe90a, 
        ondemand_video = 0xe63a, 
        opacity = 0xe91c, 
        open_in_browser = 0xe89d, 
        open_in_new = 0xe89e, 
        open_with = 0xe89f, 
        pages = 0xe7f9, 
        pageview = 0xe8a0, 
        palette = 0xe40a, 
        pan_tool = 0xe925, 
        panorama = 0xe40b, 
        panorama_fish_eye = 0xe40c, 
        panorama_horizontal = 0xe40d, 
        panorama_vertical = 0xe40e, 
        panorama_wide_angle = 0xe40f, 
        party_mode = 0xe7fa, 
        pause = 0xe034, 
        pause_circle_filled = 0xe035, 
        pause_circle_outline = 0xe036, 
        payment = 0xe8a1, 
        people = 0xe7fb, 
        people_outline = 0xe7fc, 
        perm_camera_mic = 0xe8a2, 
        perm_contact_calendar = 0xe8a3, 
        perm_data_setting = 0xe8a4, 
        perm_device_information = 0xe8a5, 
        perm_identity = 0xe8a6, 
        perm_media = 0xe8a7, 
        perm_phone_msg = 0xe8a8, 
        perm_scan_wifi = 0xe8a9, 
        person = 0xe7fd, 
        person_add = 0xe7fe, 
        person_outline = 0xe7ff, 
        person_pin = 0xe55a, 
        person_pin_circle = 0xe56a, 
        personal_video = 0xe63b, 
        pets = 0xe91d, 
        phone = 0xe0cd, 
        phone_android = 0xe324, 
        phone_bluetooth_speaker = 0xe61b, 
        phone_forwarded = 0xe61c, 
        phone_in_talk = 0xe61d, 
        phone_iphone = 0xe325, 
        phone_locked = 0xe61e, 
        phone_missed = 0xe61f, 
        phone_paused = 0xe620, 
        phonelink = 0xe326, 
        phonelink_erase = 0xe0db, 
        phonelink_lock = 0xe0dc, 
        phonelink_off = 0xe327, 
        phonelink_ring = 0xe0dd, 
        phonelink_setup = 0xe0de, 
        photo = 0xe410, 
        photo_album = 0xe411, 
        photo_camera = 0xe412, 
        photo_filter = 0xe43b, 
        photo_library = 0xe413, 
        photo_size_select_actual = 0xe432, 
        photo_size_select_large = 0xe433, 
        photo_size_select_small = 0xe434, 
        picture_as_pdf = 0xe415, 
        picture_in_picture = 0xe8aa, 
        picture_in_picture_alt = 0xe911, 
        pie_chart = 0xe6c4, 
        pie_chart_outlined = 0xe6c5, 
        pin_drop = 0xe55e, 
        place = 0xe55f, 
        play_arrow = 0xe037, 
        play_circle_filled = 0xe038, 
        play_circle_outline = 0xe039, 
        play_for_work = 0xe906, 
        playlist_add = 0xe03b, 
        playlist_add_check = 0xe065, 
        playlist_play = 0xe05f, 
        plus_one = 0xe800, 
        poll = 0xe801, 
        polymer = 0xe8ab, 
        pool = 0xeb48, 
        portable_wifi_off = 0xe0ce, 
        portrait = 0xe416, 
        power = 0xe63c, 
        power_input = 0xe336, 
        power_settings_new = 0xe8ac, 
        pregnant_woman = 0xe91e, 
        present_to_all = 0xe0df, 
        print = 0xe8ad, 
        priority_high = 0xe645, 
        ma_public = 0xe80b, 
        publish = 0xe255, 
        query_builder = 0xe8ae, 
        question_answer = 0xe8af, 
        queue = 0xe03c, 
        queue_music = 0xe03d, 
        queue_play_next = 0xe066, 
        radio = 0xe03e, 
        radio_button_checked = 0xe837, 
        radio_button_unchecked = 0xe836, 
        rate_review = 0xe560, 
        receipt = 0xe8b0, 
        recent_actors = 0xe03f, 
        record_voice_over = 0xe91f, 
        redeem = 0xe8b1, 
        redo = 0xe15a, 
        refresh = 0xe5d5, 
        remove = 0xe15b, 
        remove_circle = 0xe15c, 
        remove_circle_outline = 0xe15d, 
        remove_from_queue = 0xe067, 
        remove_red_eye = 0xe417, 
        remove_shopping_cart = 0xe928, 
        reorder = 0xe8fe, 
        repeat = 0xe040, 
        repeat_one = 0xe041, 
        replay = 0xe042, 
        replay_10 = 0xe059, 
        replay_30 = 0xe05a, 
        replay_5 = 0xe05b, 
        reply = 0xe15e, 
        reply_all = 0xe15f, 
        report = 0xe160, 
        report_problem = 0xe8b2, 
        restaurant = 0xe56c, 
        restaurant_menu = 0xe561, 
        restore = 0xe8b3, 
        restore_page = 0xe929, 
        ring_volume = 0xe0d1, 
        room = 0xe8b4, 
        room_service = 0xeb49, 
        rotate_90_degrees_ccw = 0xe418, 
        rotate_left = 0xe419, 
        rotate_right = 0xe41a, 
        rounded_corner = 0xe920, 
        router = 0xe328, 
        rowing = 0xe921, 
        rss_feed = 0xe0e5, 
        rv_hookup = 0xe642, 
        satellite = 0xe562, 
        save = 0xe161, 
        scanner = 0xe329, 
        schedule = 0xe8b5, 
        school = 0xe80c, 
        screen_lock_landscape = 0xe1be, 
        screen_lock_portrait = 0xe1bf, 
        screen_lock_rotation = 0xe1c0, 
        screen_rotation = 0xe1c1, 
        screen_share = 0xe0e2, 
        sd_card = 0xe623, 
        sd_storage = 0xe1c2, 
        search = 0xe8b6, 
        security = 0xe32a, 
        select_all = 0xe162, 
        send = 0xe163, 
        sentiment_dissatisfied = 0xe811, 
        sentiment_neutral = 0xe812, 
        sentiment_satisfied = 0xe813, 
        sentiment_very_dissatisfied = 0xe814, 
        sentiment_very_satisfied = 0xe815, 
        settings = 0xe8b8, 
        settings_applications = 0xe8b9, 
        settings_backup_restore = 0xe8ba, 
        settings_bluetooth = 0xe8bb, 
        settings_brightness = 0xe8bd, 
        settings_cell = 0xe8bc, 
        settings_ethernet = 0xe8be, 
        settings_input_antenna = 0xe8bf, 
        settings_input_component = 0xe8c0, 
        settings_input_composite = 0xe8c1, 
        settings_input_hdmi = 0xe8c2, 
        settings_input_svideo = 0xe8c3, 
        settings_overscan = 0xe8c4, 
        settings_phone = 0xe8c5, 
        settings_power = 0xe8c6, 
        settings_remote = 0xe8c7, 
        settings_system_daydream = 0xe1c3, 
        settings_voice = 0xe8c8, 
        share = 0xe80d, 
        shop = 0xe8c9, 
        shop_two = 0xe8ca, 
        shopping_basket = 0xe8cb, 
        shopping_cart = 0xe8cc, 
        short_text = 0xe261, 
        show_chart = 0xe6e1, 
        shuffle = 0xe043, 
        signal_cellular_4_bar = 0xe1c8, 
        signal_cellular_connected_no_internet_4_bar = 0xe1cd, 
        signal_cellular_no_sim = 0xe1ce, 
        signal_cellular_null = 0xe1cf, 
        signal_cellular_off = 0xe1d0, 
        signal_wifi_4_bar = 0xe1d8, 
        signal_wifi_4_bar_lock = 0xe1d9, 
        signal_wifi_off = 0xe1da, 
        sim_card = 0xe32b, 
        sim_card_alert = 0xe624, 
        skip_next = 0xe044, 
        skip_previous = 0xe045, 
        slideshow = 0xe41b, 
        slow_motion_video = 0xe068, 
        smartphone = 0xe32c, 
        smoke_free = 0xeb4a, 
        smoking_rooms = 0xeb4b, 
        sms = 0xe625, 
        sms_failed = 0xe626, 
        snooze = 0xe046, 
        sort = 0xe164, 
        sort_by_alpha = 0xe053, 
        spa = 0xeb4c, 
        space_bar = 0xe256, 
        speaker = 0xe32d, 
        speaker_group = 0xe32e, 
        speaker_notes = 0xe8cd, 
        speaker_notes_off = 0xe92a, 
        speaker_phone = 0xe0d2, 
        spellcheck = 0xe8ce, 
        star = 0xe838, 
        star_border = 0xe83a, 
        star_half = 0xe839, 
        stars = 0xe8d0, 
        stay_current_landscape = 0xe0d3, 
        stay_current_portrait = 0xe0d4, 
        stay_primary_landscape = 0xe0d5, 
        stay_primary_portrait = 0xe0d6, 
        stop = 0xe047, 
        stop_screen_share = 0xe0e3, 
        storage = 0xe1db, 
        store = 0xe8d1, 
        store_mall_directory = 0xe563, 
        straighten = 0xe41c, 
        streetview = 0xe56e, 
        strikethrough_s = 0xe257, 
        style = 0xe41d, 
        subdirectory_arrow_left = 0xe5d9, 
        subdirectory_arrow_right = 0xe5da, 
        subject = 0xe8d2, 
        subscriptions = 0xe064, 
        subtitles = 0xe048, 
        subway = 0xe56f, 
        supervisor_account = 0xe8d3, 
        surround_sound = 0xe049, 
        swap_calls = 0xe0d7, 
        swap_horiz = 0xe8d4, 
        swap_vert = 0xe8d5, 
        swap_vertical_circle = 0xe8d6, 
        switch_camera = 0xe41e, 
        switch_video = 0xe41f, 
        sync = 0xe627, 
        sync_disabled = 0xe628, 
        sync_problem = 0xe629, 
        system_update = 0xe62a, 
        system_update_alt = 0xe8d7, 
        tab = 0xe8d8, 
        tab_unselected = 0xe8d9, 
        tablet = 0xe32f, 
        tablet_android = 0xe330, 
        tablet_mac = 0xe331, 
        tag_faces = 0xe420, 
        tap_and_play = 0xe62b, 
        terrain = 0xe564, 
        text_fields = 0xe262, 
        text_format = 0xe165, 
        textsms = 0xe0d8, 
        texture = 0xe421, 
        theaters = 0xe8da, 
        thumb_down = 0xe8db, 
        thumb_up = 0xe8dc, 
        thumbs_up_down = 0xe8dd, 
        time_to_leave = 0xe62c, 
        timelapse = 0xe422, 
        timeline = 0xe922, 
        timer = 0xe425, 
        timer_10 = 0xe423, 
        timer_3 = 0xe424, 
        timer_off = 0xe426, 
        title = 0xe264, 
        toc = 0xe8de, 
        today = 0xe8df, 
        toll = 0xe8e0, 
        tonality = 0xe427, 
        touch_app = 0xe913, 
        toys = 0xe332, 
        track_changes = 0xe8e1, 
        traffic = 0xe565, 
        train = 0xe570, 
        tram = 0xe571, 
        transfer_within_a_station = 0xe572, 
        transform = 0xe428, 
        translate = 0xe8e2, 
        trending_down = 0xe8e3, 
        trending_flat = 0xe8e4, 
        trending_up = 0xe8e5, 
        tune = 0xe429, 
        turned_in = 0xe8e6, 
        turned_in_not = 0xe8e7, 
        tv = 0xe333, 
        unarchive = 0xe169, 
        undo = 0xe166, 
        unfold_less = 0xe5d6, 
        unfold_more = 0xe5d7, 
        update = 0xe923, 
        usb = 0xe1e0, 
        verified_user = 0xe8e8, 
        vertical_align_bottom = 0xe258, 
        vertical_align_center = 0xe259, 
        vertical_align_top = 0xe25a, 
        vibration = 0xe62d, 
        video_call = 0xe070, 
        video_label = 0xe071, 
        video_library = 0xe04a, 
        videocam = 0xe04b, 
        videocam_off = 0xe04c, 
        videogame_asset = 0xe338, 
        view_agenda = 0xe8e9, 
        view_array = 0xe8ea, 
        view_carousel = 0xe8eb, 
        view_column = 0xe8ec, 
        view_comfy = 0xe42a, 
        view_compact = 0xe42b, 
        view_day = 0xe8ed, 
        view_headline = 0xe8ee, 
        view_list = 0xe8ef, 
        view_module = 0xe8f0, 
        view_quilt = 0xe8f1, 
        view_stream = 0xe8f2, 
        view_week = 0xe8f3, 
        vignette = 0xe435, 
        visibility = 0xe8f4, 
        visibility_off = 0xe8f5, 
        voice_chat = 0xe62e, 
        voicemail = 0xe0d9, 
        volume_down = 0xe04d, 
        volume_mute = 0xe04e, 
        volume_off = 0xe04f, 
        volume_up = 0xe050, 
        vpn_key = 0xe0da, 
        vpn_lock = 0xe62f, 
        wallpaper = 0xe1bc, 
        warning = 0xe002, 
        watch = 0xe334, 
        watch_later = 0xe924, 
        wb_auto = 0xe42c, 
        wb_cloudy = 0xe42d, 
        wb_incandescent = 0xe42e, 
        wb_iridescent = 0xe436, 
        wb_sunny = 0xe430, 
        wc = 0xe63d, 
        web = 0xe051, 
        web_asset = 0xe069, 
        weekend = 0xe16b, 
        whatshot = 0xe80e, 
        widgets = 0xe1bd, 
        wifi = 0xe63e, 
        wifi_lock = 0xe1e1, 
        wifi_tethering = 0xe1e2, 
        work = 0xe8f9, 
        wrap_text = 0xe25b, 
        youtube_searched_for = 0xe8fa, 
        zoom_in = 0xe8ff, 
        zoom_out = 0xe900, 
        zoom_out_map = 0xe56b, 
    };

    Q_ENUM(material::icon)

    static PictoProvider *provider() {
        return new Provider();
    }

private:
    material(): QObject() {}
    ~material() {}
};



}