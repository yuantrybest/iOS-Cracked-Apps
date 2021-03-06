//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AWSStockDetailCondiView, MSTOCKPRODStockCodeInfo, NSString, SStockDiagramView, StockDetailTableHeaderDetailView, StockDetailTableHeaderPriceView, UIImageView;

@interface StockDetailTableHeaderView : UIView
{
    UIImageView *_advImageView;
    NSString *_dest;
    id <StockDetailTableHeaderViewDelegate> _delegate;
    StockDetailTableHeaderPriceView *_price;
    StockDetailTableHeaderDetailView *_detail;
    SStockDiagramView *_diagramView;
    MSTOCKPRODStockCodeInfo *_stockCodeInfo;
    AWSStockDetailCondiView *_condiView;
}

@property(retain, nonatomic) AWSStockDetailCondiView *condiView; // @synthesize condiView=_condiView;
@property(retain, nonatomic) MSTOCKPRODStockCodeInfo *stockCodeInfo; // @synthesize stockCodeInfo=_stockCodeInfo;
@property(retain, nonatomic) SStockDiagramView *diagramView; // @synthesize diagramView=_diagramView;
@property(retain, nonatomic) StockDetailTableHeaderDetailView *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) StockDetailTableHeaderPriceView *price; // @synthesize price=_price;
@property(nonatomic) __weak id <StockDetailTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCondData:(id)arg1;
- (void)updateTopData:(unsigned long long)arg1 cp:(id)arg2 amount:(id)arg3 percent:(id)arg4 isInFav:(_Bool)arg5 statusText:(id)arg6;
- (void)loadLayoutData:(id)arg1;
- (void)updateDiagramData:(id)arg1 type:(id)arg2 quotation:(id)arg3;
- (void)updateDiagram:(id)arg1;
- (void)updateExtraInfoForHorizontal:(id)arg1 verticalArray:(id)arg2;
- (void)gotoDest;
- (void)updateAdvImgAddr:(id)arg1 dest:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 stockInfo:(id)arg2;

@end

