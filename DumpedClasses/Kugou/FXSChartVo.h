//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXSChartVo : FXBaseJSONModel
{
    int _rank;
    int _level;
    int _pop;
    int _num;
    long long _userId;
    NSString *_nickName;
    NSString *_userLogo;
    NSString *_starIcon;
    long long _roomId;
    NSString *_richIcon;
    long long _cost;
}

@property(nonatomic) int num; // @synthesize num=_num;
@property(nonatomic) int pop; // @synthesize pop=_pop;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) long long cost; // @synthesize cost=_cost;
@property(retain, nonatomic) NSString *richIcon; // @synthesize richIcon=_richIcon;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *starIcon; // @synthesize starIcon=_starIcon;
@property(retain, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) int rank; // @synthesize rank=_rank;
- (void).cxx_destruct;

@end

