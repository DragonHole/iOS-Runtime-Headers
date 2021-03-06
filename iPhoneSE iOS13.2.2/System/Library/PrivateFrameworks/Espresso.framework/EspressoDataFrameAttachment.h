/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EspressoDataFrameAttachment : NSObject {

	BOOL _disabled;
	NSString* _filePath;
	void* _rawPointer;
	unsigned long long _offset;
	unsigned long long _size;

}

@property (retain) NSString * filePath;                    //@synthesize filePath=_filePath - In the implementation block
@property (assign) void* rawPointer;                       //@synthesize rawPointer=_rawPointer - In the implementation block
@property (assign) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign) unsigned long long size;                //@synthesize size=_size - In the implementation block
@property (assign) BOOL disabled;                          //@synthesize disabled=_disabled - In the implementation block
+(id)fromDict:(id)arg1 frameStorage:(id)arg2 ;
-(unsigned long long)size;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(BOOL)disabled;
-(unsigned long long)offset;
-(void*)rawPointer;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(void)setRawPointer:(void*)arg1 ;
@end

