//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCCellModeProtocol.h"

@class NSString;

@interface MCChatPageTableViewCellObject : NSObject <MCCellModeProtocol>
{
    _Bool _isTimeViewVisible;
    _Bool _isIdentifyViewVisible;
    _Bool _isNameViewVisible;
    _Bool _isLikeVisible;
    _Bool _isSendStatusVisible;
    _Bool _isReSendStatusVisible;
    long long _cellHeight;
    NSString *_timeString;
    NSString *_identifyString;
    NSString *_nameString;
    long long _style;
    long long _subStyle;
    long long _shareType;
    unsigned long long _menuConfig;
    NSString *_reusedIdentifier;
    NSString *_moduleSPM;
    NSString *_pageName;
    id <TBIMMessageAdapter> _messageAdapter;
    id <TBIMUserAdapter> _userAdapter;
}

@property(retain, nonatomic) id <TBIMUserAdapter> userAdapter; // @synthesize userAdapter=_userAdapter;
@property(retain, nonatomic) id <TBIMMessageAdapter> messageAdapter; // @synthesize messageAdapter=_messageAdapter;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *moduleSPM; // @synthesize moduleSPM=_moduleSPM;
@property(retain, nonatomic) NSString *reusedIdentifier; // @synthesize reusedIdentifier=_reusedIdentifier;
@property(nonatomic) unsigned long long menuConfig; // @synthesize menuConfig=_menuConfig;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(nonatomic) long long subStyle; // @synthesize subStyle=_subStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool isReSendStatusVisible; // @synthesize isReSendStatusVisible=_isReSendStatusVisible;
@property(nonatomic) _Bool isSendStatusVisible; // @synthesize isSendStatusVisible=_isSendStatusVisible;
@property(nonatomic) _Bool isLikeVisible; // @synthesize isLikeVisible=_isLikeVisible;
@property(retain, nonatomic) NSString *nameString; // @synthesize nameString=_nameString;
@property(nonatomic) _Bool isNameViewVisible; // @synthesize isNameViewVisible=_isNameViewVisible;
@property(retain, nonatomic) NSString *identifyString; // @synthesize identifyString=_identifyString;
@property(nonatomic) _Bool isIdentifyViewVisible; // @synthesize isIdentifyViewVisible=_isIdentifyViewVisible;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(nonatomic) _Bool isTimeViewVisible; // @synthesize isTimeViewVisible=_isTimeViewVisible;
@property(nonatomic) long long cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (float)height;
- (id)getReuseIdentifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
