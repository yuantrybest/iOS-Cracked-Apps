//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPListViewController.h"

@class NSNumber, NSString;

@interface PPao_StarHitContributedRankViewController : QYPPListViewController
{
    NSNumber *_circleId;
    NSString *_masterId;
}

@property(retain, nonatomic) NSString *masterId; // @synthesize masterId=_masterId;
@property(copy, nonatomic) NSNumber *circleId; // @synthesize circleId=_circleId;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)refresh;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

