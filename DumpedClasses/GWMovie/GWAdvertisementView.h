//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "iCarouselDataSource-Protocol.h"
#import "iCarouselDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, UIPageControl, iCarousel;
@protocol GWAdvertisementViewDelegate;

@interface GWAdvertisementView : UIView <iCarouselDataSource, iCarouselDelegate>
{
    _Bool _showPageControl;
    _Bool _scrollEnableWhenAdSingle;
    id <GWAdvertisementViewDelegate> _delegate;
    long long _autoScrollInterval;
    NSArray *_adList;
    iCarousel *_adICarouselView;
    long long _noneClickActionSeconds;
    UIPageControl *_pageControl;
    NSTimer *_timer;
    UIView *_defaultView;
}

@property(retain, nonatomic) UIView *defaultView; // @synthesize defaultView=_defaultView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) _Bool scrollEnableWhenAdSingle; // @synthesize scrollEnableWhenAdSingle=_scrollEnableWhenAdSingle;
@property(nonatomic) long long noneClickActionSeconds; // @synthesize noneClickActionSeconds=_noneClickActionSeconds;
@property(nonatomic) _Bool showPageControl; // @synthesize showPageControl=_showPageControl;
@property(retain, nonatomic) iCarousel *adICarouselView; // @synthesize adICarouselView=_adICarouselView;
@property(retain, nonatomic) NSArray *adList; // @synthesize adList=_adList;
@property(nonatomic) long long autoScrollInterval; // @synthesize autoScrollInterval=_autoScrollInterval;
@property(nonatomic) __weak id <GWAdvertisementViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isAvailable;
- (void)stopTimer;
- (void)refreshControl;
- (void)startTimer;
- (void)stopRoll;
- (void)startRoll;
- (void)carouselDidEndScrollingAnimation:(id)arg1;
- (void)carouselDidScroll:(id)arg1;
- (void)carousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (double)carousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (double)carouselItemWidth:(id)arg1;
- (id)carousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInCarousel:(id)arg1;
- (void)reloadWithAdList:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

