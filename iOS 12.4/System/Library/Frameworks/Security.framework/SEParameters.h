/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Security/Security-Structs.h>
@class NSData;

@interface SEParameters : NSObject {

	aks_params_sRef _params;
	NSData* _encoded;

}

@property (copy,readonly) NSData * data; 
@property (readonly) const void* bytes; 
@property (readonly) unsigned long long length; 
-(void)setData:(id)arg1 forKey:(unsigned)arg2 ;
-(id)initWithParameters:(id)arg1 ;
-(void)setNumber:(long long)arg1 forKey:(unsigned)arg2 ;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(const void*)bytes;
-(NSData *)data;
@end

