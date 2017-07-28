//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMAlarmClockRepeatViewControllerDelegate.h"
#import "NMAlarmClockTimePickerViewDelegate.h"
#import "NMSettingSwitchCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMAlarmClockTimePickerView, NMSettingTableView, NSDate, NSMutableArray, NSString, UIImageView, UITapGestureRecognizer;

@interface NMAlarmClockMainViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NMSettingSwitchCellDelegate, NMAlarmClockTimePickerViewDelegate, NMAlarmClockRepeatViewControllerDelegate>
{
    NMSettingTableView *_tableView;
    UIImageView *_bannerImageView;
    NSDate *_alarmClockTime;
    _Bool _isAlarmOpen;
    _Bool _isAlarmSoundRandom;
    NSString *_songName;
    NSMutableArray *_repeatDays;
    UITapGestureRecognizer *_tapGesture;
    NMAlarmClockTimePickerView *_alarmClockTimePicker;
}

+ (struct CGSize)bannerSize;
@property(retain, nonatomic) NMAlarmClockTimePickerView *alarmClockTimePicker; // @synthesize alarmClockTimePicker=_alarmClockTimePicker;
- (void).cxx_destruct;
- (void)dealloc;
- (void)alarmClockDidOpen;
- (void)refreshTable;
- (void)settingSwitchCell:(id)arg1 switchValueChanged:(_Bool)arg2;
- (void)navigationPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)alarmClockTimePickerView:(id)arg1 selectedTime:(id)arg2;
- (void)alarmClockRepeatViewController:(id)arg1 repeatDays:(id)arg2;
- (id)repeatDaysText;
- (void)_addShowBILog;
- (void)_showBannerWithAniamation:(id)arg1;
- (void)showAdHeaderIfNeeded;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewTapped:(id)arg1;
- (void)backAction:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_refreshView;
- (void)loadData;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
