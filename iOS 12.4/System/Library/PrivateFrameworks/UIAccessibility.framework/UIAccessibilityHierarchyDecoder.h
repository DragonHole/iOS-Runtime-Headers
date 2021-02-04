/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface UIAccessibilityHierarchyDecoder : NSObject {

	NSData* _hierarchyData;

}

@property (nonatomic,retain) NSData * hierarchyData;              //@synthesize hierarchyData=_hierarchyData - In the implementation block
-(void)setHierarchyData:(NSData *)arg1 ;
-(NSData *)hierarchyData;
-(id)initWithHierarchyData:(id)arg1 ;
-(id)decodeHierarchyWithContainer:(id)arg1 error:(id*)arg2 ;
@end
