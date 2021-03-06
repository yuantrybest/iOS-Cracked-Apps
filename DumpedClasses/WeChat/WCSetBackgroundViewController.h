//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCFacadeExt.h"
#import "WCImageViewDelegate.h"

@class MMTableView, NSMutableDictionary, NSString, WCBGStorage;

@interface WCSetBackgroundViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFacadeExt, WCImageViewDelegate>
{
    MMTableView *m_tableView;
    WCBGStorage *m_backgroundData;
    NSMutableDictionary *m_cache;
}

- (void).cxx_destruct;
- (void)onClickWCImage:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)idForIndexPath:(id)arg1;
- (void)onBGStorageUpdated;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

