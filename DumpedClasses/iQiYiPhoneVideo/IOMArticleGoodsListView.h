//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface IOMArticleGoodsListView : UIView
{
    CDUnknownBlockType _handleClickGoodsEvent;
    NSMutableArray *_goodsArray;
}

@property(retain, nonatomic) NSMutableArray *goodsArray; // @synthesize goodsArray=_goodsArray;
@property(copy, nonatomic) CDUnknownBlockType handleClickGoodsEvent; // @synthesize handleClickGoodsEvent=_handleClickGoodsEvent;
- (void).cxx_destruct;
- (void)displayGoods:(id)arg1;

@end

