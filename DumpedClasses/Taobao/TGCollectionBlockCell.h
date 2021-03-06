//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TGCollectionBlockViewModel;

@interface TGCollectionBlockCell : UICollectionViewCell
{
    TGCollectionBlockViewModel *_viewModel;
    long long _sid;
    long long _pageType;
    long long _indexRow;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 width:(double)arg2;
@property(nonatomic) long long indexRow; // @synthesize indexRow=_indexRow;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long sid; // @synthesize sid=_sid;
@property(retain, nonatomic) TGCollectionBlockViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

