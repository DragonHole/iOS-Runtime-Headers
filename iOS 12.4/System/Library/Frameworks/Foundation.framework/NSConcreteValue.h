/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSConcreteValue : NSValue {

	unsigned long long _specialFlags;
	void* typeInfo;

}
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 strict:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)_value;
-(BOOL)isEqualToValue:(id)arg1 ;
-(const char*)objCType;
-(void)getValue:(void*)arg1 ;
@end
