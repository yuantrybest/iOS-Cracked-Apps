//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "P_QLDragToRefresh.h"
#import "QLThumbCreationUserInfo.h"

@class NSIndexPath, NSString, QLSearchItem, QLSearchResultModel, QLSearchResultViewController, QLSearchViewController;

@interface QLSearchResultPageContentViewController : QLBaseTableViewController <P_QLDragToRefresh, QLThumbCreationUserInfo>
{
    _Bool _shouldRequest;
    QLSearchResultModel *_resultModel;
    QLSearchItem *_srModelItem;
    NSIndexPath *_pageIndexPath;
}

@property(copy, nonatomic) NSIndexPath *pageIndexPath; // @synthesize pageIndexPath=_pageIndexPath;
@property(retain, nonatomic) QLSearchItem *srModelItem; // @synthesize srModelItem=_srModelItem;
@property(nonatomic) _Bool shouldRequest; // @synthesize shouldRequest=_shouldRequest;
- (void).cxx_destruct;
- (void)loadData:(int)arg1 more:(_Bool)arg2;
- (id)requestModel;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)retryDown:(id)arg1;
@property(readonly, nonatomic) QLSearchResultModel *resultModel; // @synthesize resultModel=_resultModel;
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (id)dragRefreshView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)forceLoadData;
- (id)currentPageTableViewForReport;
- (void)enterPage;
- (_Bool)hideTabBarWhenPushed;
- (_Bool)navigationBarHidden;
- (_Bool)isCellVisiableInTableView:(id)arg1;
- (id)pageChineseName;
@property(readonly, nonatomic) QLSearchResultViewController *superCtl;
@property(readonly, nonatomic) QLSearchViewController *topCtl;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

