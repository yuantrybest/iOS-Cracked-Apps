//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView;

@interface KTVPrivChatLoadHistoryHeader : UIView
{
    unsigned int _loadState;
    CDUnknownBlockType _loadHistoryDataBlock;
    UIActivityIndicatorView *_loadingView;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType loadHistoryDataBlock; // @synthesize loadHistoryDataBlock=_loadHistoryDataBlock;
@property(nonatomic) unsigned int loadState; // @synthesize loadState=_loadState;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)willMoveToSuperview:(id)arg1;
- (void)endLoading;
- (id)initWithFrame:(struct CGRect)arg1;

@end

