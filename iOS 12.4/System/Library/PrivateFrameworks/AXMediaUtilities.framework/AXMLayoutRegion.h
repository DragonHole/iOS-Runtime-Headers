/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

@interface AXMLayoutRegion : AXMLayoutItem {

	NSMutableArray* _lines;

}
+(id)region:(id)arg1 ;
-(id)lines;
-(void)addLine:(id)arg1 ;
-(id)firstLine;
-(CGRect)normalizedFrame;
-(CGRect)frame;
@end
