//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIScrollView;

@interface TBFavoriteGuideView : UIView <UIScrollViewDelegate>
{
    int _numberOfGuideViewsDownloaded;
    id <TBFavoriteGuideViewDelegate> _delegate;
    UIScrollView *_scrollView;
}

@property int numberOfGuideViewsDownloaded; // @synthesize numberOfGuideViewsDownloaded=_numberOfGuideViewsDownloaded;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <TBFavoriteGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)fetchGuideImages;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

