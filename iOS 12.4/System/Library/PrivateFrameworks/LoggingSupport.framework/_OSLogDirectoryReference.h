/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _OSLogDirectoryReference : NSObject {

	int _fd;
	long long _etk;

}

@property (nonatomic,readonly) int fileDescriptor; 
-(int)fileDescriptor;
-(id)initWithDescriptor:(int)arg1 ;
-(id)initWithDescriptor:(int)arg1 sandboxExtensionToken:(const char*)arg2 ;
-(void)dealloc;
-(void)close;
@end

