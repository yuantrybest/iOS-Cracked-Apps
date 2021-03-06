//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KTVTableViewDataSource.h"
#import "KTVTableViewDelegate.h"

@class KTVCommonTableViewRE, NSString;

@interface KTVSingleAccView : UIView <KTVTableViewDataSource, KTVTableViewDelegate>
{
    _Bool _isChorus;
    KTVCommonTableViewRE *_tableView;
    id <KTVSingleAccViewEventDelegate> _eventDelegate;
    id <KTVSingleAccViewDataSource> _dataSource;
}

@property(nonatomic) __weak id <KTVSingleAccViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <KTVSingleAccViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(nonatomic) _Bool isChorus; // @synthesize isChorus=_isChorus;
@property(retain, nonatomic) KTVCommonTableViewRE *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)ktvTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)ktvTableView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (id)ktvTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)ktvTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reflash;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

