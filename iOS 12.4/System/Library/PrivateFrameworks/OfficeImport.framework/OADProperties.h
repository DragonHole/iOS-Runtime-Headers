/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OADProperties : NSObject {

	OADProperties* mParent;
	unsigned mIsMerged : 1;
	unsigned mIsMergedWithParent : 1;

}
+(id)defaultProperties;
-(void)setParent:(id)arg1 ;
-(id)overrideForSelector:(SEL)arg1 mustExist:(BOOL)arg2 ;
-(void)p_setParent:(id)arg1 ;
-(id)initWithDefaults;
-(BOOL)isAnythingOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isMerged;
-(BOOL)isMergedWithParent;
-(void)setMerged:(BOOL)arg1 ;
-(void)setMergedWithParent:(BOOL)arg1 ;
-(void)removeUnnecessaryOverrides;
-(id)overrideForSelector:(SEL)arg1 ;
-(BOOL)isMergedPropertyForSelector:(SEL)arg1 ;
-(id)possiblyInexistentOverrideForSelector:(SEL)arg1 ;
-(void)changeParentPreservingEffectiveValues:(id)arg1 ;
-(void)flatten;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)parent;
@end

