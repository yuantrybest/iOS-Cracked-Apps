//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

#import "CTBasicCalendarViewControllerDelegate.h"
#import "CTHotelDetailModifyDateSheetBeforeCellDelegate.h"
#import "CTHotelDetailModifyDateSheetCheckDayCellDelegate.h"
#import "CTHotelDetailModifyDateSheetDateCelldelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTHotelDetailModifyDataModel, CTNavigationController, CTTableView, NSString, UIButton, UIView;

@interface CTHotelDetailModifyDateSheet : CTRootView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, CTHotelDetailModifyDateSheetBeforeCellDelegate, CTHotelDetailModifyDateSheetDateCelldelegate, CTHotelDetailModifyDateSheetCheckDayCellDelegate, CTBasicCalendarViewControllerDelegate>
{
    _Bool _isShowRoomCount;
    CTTableView *_mainTable;
    CTHotelDetailModifyDataModel *_dataModel;
    UIButton *_confirmBtn;
    UIView *_contentBgView;
    id <CTHotelDetailModifyDatedelegate> _delegate;
    CTNavigationController *_calendarNav;
}

+ (id)initWithDelegate:(id)arg1 hotelcachbean:(id)arg2;
@property(nonatomic) _Bool isShowRoomCount; // @synthesize isShowRoomCount=_isShowRoomCount;
@property(retain, nonatomic) CTNavigationController *calendarNav; // @synthesize calendarNav=_calendarNav;
@property(nonatomic) __weak id <CTHotelDetailModifyDatedelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) CTHotelDetailModifyDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak CTTableView *mainTable; // @synthesize mainTable=_mainTable;
- (void).cxx_destruct;
- (void)calendarViewController:(id)arg1 didSelectedDateView:(id)arg2 andSelectedDate:(id)arg3;
- (void)calendarViewController:(id)arg1 didSelectedDate:(id)arg2;
- (void)dismiss:(id)arg1;
- (void)modifydate;
- (void)nextday:(id)arg1;
- (void)beforeday:(id)arg1;
- (void)HotelMainTodayBeforeCellDelegateIsOpen:(_Bool)arg1;
- (void)subPressed:(id)arg1 type:(int)arg2;
- (void)addPressed:(id)arg1 type:(int)arg2;
- (void)confirmAction;
- (void)hideAction:(id)arg1;
- (_Bool)isMMoring;
- (double)getTabbleHeight;
- (void)popDownAnimation;
- (void)popUpAnimation;
- (long long)setDateInfo;
- (id)getLastViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutSubviews;
- (double)getViewControllerHeight:(id)arg1;
- (id)viewController;
- (void)initBaseView;
- (void)initBaseData;
- (void)initViews;
- (void)dealWithCachenbean:(id)arg1;
- (void)saveWithCacheBean:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
