//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDIMBaseMessageCellView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, UIColor, UIImageView, UILabel, UIView;

@interface DDIMTextMessageCellView : DDIMBaseMessageCellView <UIGestureRecognizerDelegate>
{
    _Bool _needsFramesetter;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    UILabel *_contentLabel;
    UIView *_separatorLine;
    UILabel *_translatContentLabel;
    UIImageView *_iconView;
    UIImageView *_indicatorView;
    UIColor *_phoneLinkColor;
    NSMutableArray *_linkRangesArray;
    struct CGSize _sizeContent;
}

+ (double)textMessageFontSizeWithCellModel:(id)arg1;
+ (double)getCellViewHeightWithMessage:(id)arg1;
@property(retain, nonatomic) NSMutableArray *linkRangesArray; // @synthesize linkRangesArray=_linkRangesArray;
@property(nonatomic) struct CGSize sizeContent; // @synthesize sizeContent=_sizeContent;
@property(retain, nonatomic) UIColor *phoneLinkColor; // @synthesize phoneLinkColor=_phoneLinkColor;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *translatContentLabel; // @synthesize translatContentLabel=_translatContentLabel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (id)parseURL:(id)arg1;
- (void)tapContentBgViewWithLocation:(struct CGPoint)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)getLinkInfoWithLocation:(struct CGPoint)arg1;
- (void)updateAttributedContent:(id)arg1;
- (id)addLinkAttributesToAttributedContent:(id)arg1 withLinkRangesArray:(id)arg2;
- (id)allLinkRangesWithText:(id)arg1;
- (id)getRangesForPhoneNumbers:(id)arg1;
- (struct __CTFramesetter *)framesetter;
- (void)didSelectTextPhoneNumberLinkInLabel:(id)arg1;
- (_Bool)tapTextContentViewWithLocation:(struct CGPoint)arg1;
- (struct CGSize)sizeToFits;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)setTextContent:(id)arg1 textColor:(id)arg2 linkColor:(id)arg3;
- (void)layoutMessageView;
- (void)configView;
- (void)updateCellModel:(id)arg1;
- (id)initWithCellModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
