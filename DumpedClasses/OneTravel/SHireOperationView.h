//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEOperationView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UITableView;

@interface SHireOperationView : ONEOperationView <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _ruleViewBlock;
    id _delegate;
    UITableView *_tableView;
    NSArray *_dataArray;
    UIButton *_submitBtn;
    CDUnknownBlockType _creatOrderBlock;
}

@property(copy, nonatomic) CDUnknownBlockType creatOrderBlock; // @synthesize creatOrderBlock=_creatOrderBlock;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType ruleViewBlock; // @synthesize ruleViewBlock=_ruleViewBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getCellModelWithIndexPath:(id)arg1;
- (void)setOrderBtnStatus:(_Bool)arg1;
- (void)reloadWithData:(id)arg1;
- (void)submitOrder:(id)arg1;
- (void)addSubmitBtn;
- (void)ruleBtnClicked;
- (void)loadTableView;
- (id)initWithFrame:(struct CGRect)arg1 createOrderBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

