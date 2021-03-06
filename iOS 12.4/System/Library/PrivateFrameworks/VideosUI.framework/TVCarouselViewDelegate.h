/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCarouselViewDelegate <NSObject>
@optional
-(BOOL)carouselView:(id)arg1 shouldHighlightItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didUnhighlightItemAtIndex:(unsigned long long)arg2;
-(BOOL)carouselView:(id)arg1 shouldSelectItemAtIndex:(unsigned long long)arg2;
-(BOOL)carouselView:(id)arg1 shouldDeselectItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didDeselectItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)carouselView:(id)arg1 willDisplayItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didEndDisplayingItemAtIndex:(unsigned long long)arg2;
-(void)carouselViewDidScroll:(id)arg1;
-(void)carouselView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;

@end

