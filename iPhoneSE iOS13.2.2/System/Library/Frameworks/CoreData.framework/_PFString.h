/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <Foundation/NSString.h>

@interface _PFString : NSString {

	int _cd_rc;
	unsigned _length;
	id _sourceData;

}
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(id)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(const char*)cString;
-(const char*)UTF8String;
-(unsigned long long)cStringLength;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(const unsigned short*)_fastCharacterContents;
-(BOOL)isEqualToString:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(Class)classForCoder;
-(BOOL)_isCString;
-(Class)classForArchiver;
-(void)getCharacters:(unsigned short*)arg1 ;
-(void)getCString:(char*)arg1 ;
@end
