/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {

	NSString* mName;
	NSMutableArray* mAlternateNames;
	int mFontFamily;
	int mCharacterSet;
	int mPitch;

}
+(int)cpFontClassFromWdFontFamily:(int)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)alternateNames;
-(int)pitch;
-(void)setPitch:(int)arg1 ;
-(int)fontFamily;
-(void)setFontFamily:(int)arg1 ;
-(int)characterSet;
-(void)setCharacterSet:(int)arg1 ;
-(void)addAlternateName:(id)arg1 ;
-(id)secondName;
@end

