//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FAOneRowKrcView, NSArray, NSString;

@interface FALCMusicSongKrcView : UIView
{
    _Bool _isClickCloseAction;
    FAOneRowKrcView *_oneRowKrcView;
    NSArray *_songKrcArray;
    NSString *_songHash;
}

@property(nonatomic) _Bool isClickCloseAction; // @synthesize isClickCloseAction=_isClickCloseAction;
@property(retain, nonatomic) NSString *songHash; // @synthesize songHash=_songHash;
@property(retain, nonatomic) NSArray *songKrcArray; // @synthesize songKrcArray=_songKrcArray;
@property(retain, nonatomic) FAOneRowKrcView *oneRowKrcView; // @synthesize oneRowKrcView=_oneRowKrcView;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

