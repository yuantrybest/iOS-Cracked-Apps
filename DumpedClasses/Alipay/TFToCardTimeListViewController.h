//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APTableView, NSArray, NSString, TFReceiveTimeOpt;

@interface TFToCardTimeListViewController : TFViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <TFToCardTimeListDelegate> _timeDelegate;
    TFReceiveTimeOpt *_selectedTimeOpt;
    NSArray *_timeOptList;
    APTableView *_formTableView;
}

@property(retain, nonatomic) APTableView *formTableView; // @synthesize formTableView=_formTableView;
@property(readonly, nonatomic) NSArray *timeOptList; // @synthesize timeOptList=_timeOptList;
@property(readonly, nonatomic) TFReceiveTimeOpt *selectedTimeOpt; // @synthesize selectedTimeOpt=_selectedTimeOpt;
@property(nonatomic) __weak id <TFToCardTimeListDelegate> timeDelegate; // @synthesize timeDelegate=_timeDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)locationWithIndex:(long long)arg1;
- (long long)statusWithTimeOpt:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setupFormView;
- (void)checkBankReceiveTime;
- (void)initialConfig;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTimeList:(id)arg1 selectedTime:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

