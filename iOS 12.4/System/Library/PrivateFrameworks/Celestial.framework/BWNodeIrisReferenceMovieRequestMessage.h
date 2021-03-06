/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class BWIrisMovieInfo;

@interface BWNodeIrisReferenceMovieRequestMessage : BWNodeMessage {

	BWIrisMovieInfo* _irisMovieInfo;

}

@property (readonly) BWIrisMovieInfo * irisMovieInfo; 
+(id)newMessageWithIrisMovieInfo:(id)arg1 ;
-(BWIrisMovieInfo *)irisMovieInfo;
-(id)_initWithIrisMovieInfo:(id)arg1 ;
-(void)dealloc;
@end

