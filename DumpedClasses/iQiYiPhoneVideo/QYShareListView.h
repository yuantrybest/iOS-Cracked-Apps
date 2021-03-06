//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton, UILabel;
@protocol QYShareListViewDelegate;

@interface QYShareListView : UIView
{
    _Bool _isPhoneApp;
    _Bool _isFulnessInLine;
    id <QYShareListViewDelegate> _shareListViewDelegate;
    UILabel *_titleLabel;
    UIView *_listBgView;
    UIView *_listContentView;
    UIButton *_cancelBtn;
    CDUnknownBlockType _setupListItemBlock;
    NSArray *_shareItemArray;
    NSMutableArray *_cellArrays;
    unsigned long long _itemAlignmentType;
    long long _itemCountInRow;
    double _itemWidth;
}

@property(nonatomic) _Bool isFulnessInLine; // @synthesize isFulnessInLine=_isFulnessInLine;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long itemCountInRow; // @synthesize itemCountInRow=_itemCountInRow;
@property(nonatomic) unsigned long long itemAlignmentType; // @synthesize itemAlignmentType=_itemAlignmentType;
@property(copy, nonatomic) NSMutableArray *cellArrays; // @synthesize cellArrays=_cellArrays;
@property(copy, nonatomic) NSArray *shareItemArray; // @synthesize shareItemArray=_shareItemArray;
@property(nonatomic) _Bool isPhoneApp; // @synthesize isPhoneApp=_isPhoneApp;
@property(copy, nonatomic) CDUnknownBlockType setupListItemBlock; // @synthesize setupListItemBlock=_setupListItemBlock;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *listContentView; // @synthesize listContentView=_listContentView;
@property(retain, nonatomic) UIView *listBgView; // @synthesize listBgView=_listBgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <QYShareListViewDelegate> shareListViewDelegate; // @synthesize shareListViewDelegate=_shareListViewDelegate;
- (void).cxx_destruct;
- (void)cancelBtnDidPressed:(id)arg1;
- (void)updateViewAilgnment:(id)arg1 superView:(id)arg2 alignment:(unsigned long long)arg3;
- (id)setupSigleLineRow:(id)arg1 rowIndex:(unsigned long long)arg2 rowsCount:(unsigned long long)arg3;
- (void)setupShareItems;
- (void)setupSubViewWithBlock:(CDUnknownBlockType)arg1;
- (void)setupSubView;
- (id)initWithShareItem:(id)arg1 isPhoneApp:(_Bool)arg2 itemCountInRow:(unsigned long long)arg3;

@end

