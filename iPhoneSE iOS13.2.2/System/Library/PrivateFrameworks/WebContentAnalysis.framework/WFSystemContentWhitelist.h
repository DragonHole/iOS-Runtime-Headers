/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface WFSystemContentWhitelist : NSObject {

	NSArray* _whitelistItems;

}
+(id)defaultSystemWhitelist;
+(id)newWhitelistItemFromPlistEntry:(id)arg1 ;
-(void)dealloc;
-(BOOL)isURLWhitelisted:(id)arg1 ;
-(id)initWithWhitelistURL:(id)arg1 ;
@end

