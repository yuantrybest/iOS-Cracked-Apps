//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBXSearchTabButtonBase.h"

@class NXView, TBXSearchNXComponent;

@interface TBXSearchTabNXButton : TBXSearchTabButtonBase
{
    TBXSearchNXComponent *_nxComponent;
    NXView *_nxView;
}

+ (id)buttonWithType:(long long)arg1;
@property(retain, nonatomic) NXView *nxView; // @synthesize nxView=_nxView;
@property(retain, nonatomic) TBXSearchNXComponent *nxComponent; // @synthesize nxComponent=_nxComponent;
- (void).cxx_destruct;
- (double)getTheNeedWidth;
- (void)setBtnSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setChildComponentSize;
- (void)createNx;
- (void)configModel:(id)arg1 andSearchService:(id)arg2;

@end

