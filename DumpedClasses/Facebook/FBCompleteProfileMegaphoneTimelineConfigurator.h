//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBCompleteProfileMegaphoneConfigurator.h"

@class CAShapeLayer;

@interface FBCompleteProfileMegaphoneTimelineConfigurator : FBCompleteProfileMegaphoneConfigurator
{
    CAShapeLayer *_borderLayer;
}

+ (_Bool)shouldShowTimelinephoneWithSession:(id)arg1;
- (void).cxx_destruct;
- (id)surface;
- (id)newAccessoryQuestionViewWithFrame:(struct CGRect)arg1;
- (id)newBorderLayer;
- (id)newShadowViewWithFrame:(struct CGRect)arg1;
- (id)newFooterWithFrame:(struct CGRect)arg1;
- (id)newTypeaheadCellWithReusedIdentifier:(id)arg1;
- (id)newInferenceCellWithReusedIdentifier:(id)arg1;
- (double)accessoryQuestionViewHeight;
- (struct CGSize)closeButtonInset;
- (double)contentInset;
- (_Bool)showQuestionCell;
- (double)cornerRadius;
- (double)footerHeight;
- (double)confirmationCellHeight;
- (double)inferenceCellExpandedHeight;
- (double)typeaheadCellHeight;
- (int)initialState;

@end
