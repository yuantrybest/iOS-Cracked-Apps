//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWAttractControl, GWStatusCollectProvider;
@protocol GWAttractCommentViewDelegate;

@interface GWAttractCommentView : UIView
{
    _Bool _wantSee;
    _Bool _hadSee;
    id <GWAttractCommentViewDelegate> _delegate;
    GWAttractControl *_wantLookControl;
    GWAttractControl *_hadLookControl;
    id _currentModel;
    GWStatusCollectProvider *_addCollectProvider;
    GWStatusCollectProvider *_cancelCollectProvider;
}

@property(retain, nonatomic) GWStatusCollectProvider *cancelCollectProvider; // @synthesize cancelCollectProvider=_cancelCollectProvider;
@property(retain, nonatomic) GWStatusCollectProvider *addCollectProvider; // @synthesize addCollectProvider=_addCollectProvider;
@property(retain, nonatomic) id currentModel; // @synthesize currentModel=_currentModel;
@property(nonatomic) _Bool hadSee; // @synthesize hadSee=_hadSee;
@property(nonatomic) _Bool wantSee; // @synthesize wantSee=_wantSee;
@property(retain, nonatomic) GWAttractControl *hadLookControl; // @synthesize hadLookControl=_hadLookControl;
@property(retain, nonatomic) GWAttractControl *wantLookControl; // @synthesize wantLookControl=_wantLookControl;
@property(nonatomic) __weak id <GWAttractCommentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateDataWithModel:(id)arg1;
- (void)resetWantAndHadLookView;
- (void)resetModelAttribute;
- (id)appTag;
- (id)relatedId;
- (void)cancelCollectRequest:(int)arg1 withCollectType:(int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)addCollectRequest:(int)arg1 withCollectType:(int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)hadLookControlClick:(id)arg1;
- (void)wantLookControlClick:(id)arg1;
- (_Bool)loginExamine;
- (void)loadAllView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
