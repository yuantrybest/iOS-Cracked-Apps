//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray<WDInviteAggrUserStructModel>, NSNumber, NSString<Optional>;

@interface WDWendaInviteUserlistResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSString<Optional> *_err_tips;
    NSArray<WDInviteAggrUserStructModel> *_invite_user_list;
}

@property(retain, nonatomic) NSArray<WDInviteAggrUserStructModel> *invite_user_list; // @synthesize invite_user_list=_invite_user_list;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
