/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIPostPlayConfig : NSObject {

	double _bootstrapInterval;
	double _documentUpdateOffsetInterval;
	unsigned long long _maximumAutoPlayableItems;

}

@property (assign,nonatomic) double bootstrapInterval;                                 //@synthesize bootstrapInterval=_bootstrapInterval - In the implementation block
@property (assign,nonatomic) double documentUpdateOffsetInterval;                      //@synthesize documentUpdateOffsetInterval=_documentUpdateOffsetInterval - In the implementation block
@property (assign,nonatomic) unsigned long long maximumAutoPlayableItems;              //@synthesize maximumAutoPlayableItems=_maximumAutoPlayableItems - In the implementation block
-(id)init;
-(double)bootstrapInterval;
-(void)setBootstrapInterval:(double)arg1 ;
-(double)documentUpdateOffsetInterval;
-(void)setDocumentUpdateOffsetInterval:(double)arg1 ;
-(unsigned long long)maximumAutoPlayableItems;
-(void)setMaximumAutoPlayableItems:(unsigned long long)arg1 ;
@end

