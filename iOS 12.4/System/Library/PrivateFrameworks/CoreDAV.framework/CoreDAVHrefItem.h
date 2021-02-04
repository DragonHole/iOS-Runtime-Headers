/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {

	NSURL* _baseURL;
	int _writeStyle;

}

@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) int writeStyle;               //@synthesize writeStyle=_writeStyle - In the implementation block
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(int)writeStyle;
-(void)setWriteStyle:(int)arg1 ;
-(id)payloadAsFullURL;
-(id)payloadAsOriginalURL;
-(void)write:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)baseURL;
@end
