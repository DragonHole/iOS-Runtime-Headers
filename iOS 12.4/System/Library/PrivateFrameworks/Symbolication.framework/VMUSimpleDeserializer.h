/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUAbstractSerializer.h>

@class NSData;

@interface VMUSimpleDeserializer : VMUAbstractSerializer {

	void* _cache;
	NSData* _data;

}
-(unsigned)deserialize32;
-(unsigned long long)deserialize64;
-(id)copyDeserializedString;
-(id)copyDeserializedStringWithID:(unsigned)arg1 ;
-(void)skipFields:(unsigned)arg1 ;
-(const char*)copyDeserializedNullTerminatedBytes;
-(unsigned*)_deserializeValues:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

