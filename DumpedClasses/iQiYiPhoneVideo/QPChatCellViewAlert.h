//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPChatCellViewBase.h"

@class QPChatMessage, UILabel, UIView;

@interface QPChatCellViewAlert : QPChatCellViewBase
{
    UILabel *alertLabel;
    UIView *backView;
    UILabel *appendLabel;
    UIView *verLine1;
    UIView *verLine2;
    QPChatMessage *_message;
}

@property(retain, nonatomic) QPChatMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) UIView *verLine2; // @synthesize verLine2;
@property(retain, nonatomic) UIView *verLine1; // @synthesize verLine1;
@property(retain, nonatomic) UILabel *appendLabel; // @synthesize appendLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView;
@property(retain, nonatomic) UILabel *alertLabel; // @synthesize alertLabel;
- (void).cxx_destruct;
- (void)clickAppendLabel:(id)arg1;
- (void)setupCellWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

