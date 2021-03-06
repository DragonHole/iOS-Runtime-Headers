/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding, NSCopying> {

	NSMutableArray* _renderValues;
	NSMutableArray* _engagementValues;

}

@property (retain) NSMutableArray * renderValues;                  //@synthesize renderValues=_renderValues - In the implementation block
@property (retain) NSMutableArray * engagementValues;              //@synthesize engagementValues=_engagementValues - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)renderValues;
-(void)setRenderValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)engagementValues;
-(void)setEngagementValues:(NSMutableArray *)arg1 ;
@end

