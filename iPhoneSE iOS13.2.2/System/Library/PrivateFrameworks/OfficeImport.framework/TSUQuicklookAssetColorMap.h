/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, NSString;

@interface TSUQuicklookAssetColorMap : NSObject {

	NSMutableDictionary* mAssetMap;
	NSString* mAppAssetPath;

}

@property (nonatomic,retain) NSMutableDictionary * assetMap; 
@property (nonatomic,retain) NSString * appAssetPath; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)quicklookAssetMap;
+(BOOL)hasAppAssets;
+(id)colorForResource:(id)arg1 ;
+(id)locatorForSageChartTextureSet:(id)arg1 image:(id)arg2 ;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)appAssetPath;
-(NSMutableDictionary *)assetMap;
-(void)setAssetMap:(NSMutableDictionary *)arg1 ;
-(void)setAppAssetPath:(NSString *)arg1 ;
@end

