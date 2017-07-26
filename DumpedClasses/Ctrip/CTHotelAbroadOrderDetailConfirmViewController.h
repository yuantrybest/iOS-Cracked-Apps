//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTAbroardOrderConfirmDelegate.h"

@class CTHotelOrderDetailCacheBean, NSString, UITableView;

@interface CTHotelAbroadOrderDetailConfirmViewController : CTRootViewController <CTAbroardOrderConfirmDelegate>
{
    int hotelInfoHeight;
    int hotelDetailHeight;
    _Bool isFirstLoad;
    UITableView *tableView_;
    CTHotelOrderDetailCacheBean *_detailCacheBean;
}

@property(retain, nonatomic) CTHotelOrderDetailCacheBean *detailCacheBean; // @synthesize detailCacheBean=_detailCacheBean;
@property _Bool isFirstLoad; // @synthesize isFirstLoad;
@property(retain, nonatomic) UITableView *tableView_; // @synthesize tableView_;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveOrderToAlbum;
- (void)saveConfirmViewAction:(id)arg1;
- (id)headerCell:(id)arg1 title:(id)arg2;
- (id)drawOrderConfirmDetailCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)drawOrderConfirmHotelInfoCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)drawOrderConfirmNoteCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)initSectionHeight;
- (id)tableHeaderView;
- (void)updateHotelList;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewsFitToIphone5;
- (void)initData;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
