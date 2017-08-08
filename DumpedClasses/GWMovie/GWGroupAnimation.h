//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GWGroupButtonCell, UIImageView;

@interface GWGroupAnimation : NSObject
{
    _Bool _isUseRound;
    UIImageView *_moveRedBlockView;
    GWGroupButtonCell *_tempLabel;
    CDUnknownBlockType _completion;
}

@property(nonatomic) _Bool isUseRound; // @synthesize isUseRound=_isUseRound;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) GWGroupButtonCell *tempLabel; // @synthesize tempLabel=_tempLabel;
@property(retain, nonatomic) UIImageView *moveRedBlockView; // @synthesize moveRedBlockView=_moveRedBlockView;
- (void).cxx_destruct;
- (void)pop_animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)removeOldAnimationBlock;
- (void)gotoNewItemFromCell:(id)arg1 toCell:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
