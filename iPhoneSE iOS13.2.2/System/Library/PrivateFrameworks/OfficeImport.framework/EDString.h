/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class NSString, EDRunsCollection, EDPhoneticInfo;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {

	NSString* mString;
	EDRunsCollection* mRuns;
	EDPhoneticInfo* mPhoneticInfo;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)string;
+(id)edStringWithString:(id)arg1 ;
+(id)edStringWithString:(id)arg1 runs:(id)arg2 ;
-(id)init;
-(id)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)prependString:(id)arg1 ;
-(id)runs;
-(void)setRuns:(id)arg1 ;
-(BOOL)areThereRuns;
-(id)firstRunFont;
-(id)firstRunEffects;
-(void)setDoNotModify:(BOOL)arg1 ;
-(id)initWithString:(id)arg1 runs:(id)arg2 ;
-(BOOL)isEqualToEDString:(id)arg1 ;
-(void)removeCharacterAtIndex:(unsigned long long)arg1 ;
-(void)removeCharactersInSet:(id)arg1 ;
-(id)phoneticInfo;
-(void)setPhoneticInfo:(id)arg1 ;
-(id)firstFont;
@end

