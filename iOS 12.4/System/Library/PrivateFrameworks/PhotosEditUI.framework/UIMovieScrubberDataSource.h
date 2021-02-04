/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIMovieScrubberDataSource <NSObject>
@optional
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;

@required
-(double)movieScrubberDuration:(id)arg1;
-(id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
-(double)movieScrubberThumbnailAspectRatio:(id)arg1;

@end
