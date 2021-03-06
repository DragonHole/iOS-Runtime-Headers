/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDSwatchRenderingOperation.h>

@class TSDMovieInfo;

@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation {

	TSDMovieInfo* mMovieInfo;
	BOOL mShouldClipVertically;

}

@property (retain) TSDMovieInfo * movieInfo; 
-(TSDMovieInfo *)movieInfo;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7 ;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 ;
-(void)setMovieInfo:(TSDMovieInfo *)arg1 ;
-(void)dealloc;
@end

