/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray;

@interface _CUIKeyTestOrganizer : NSObject {

	renditionkeytoken originalKey[18];
	NSArray* orderedNonZeroFlexibleAttributes;
	unsigned long long flexAttributesCount;
	renditionkeytoken testKey[18];
	unsigned long long chooseCount;
	unsigned long long subchooseCount;

}
-(unsigned long long)_attributeToBumpIndex;
-(BOOL)_bumpTestKeyAttributeIndex:(unsigned long long)arg1 ;
-(id)_nonZeroFlexibleAttributesInKey:(const renditionkeytoken*)arg1 ;
-(void)_bumpTestKey;
-(id)initWithRenditionKey:(const renditionkeytoken*)arg1 ;
-(renditionkeytoken*)nextKey;
-(void)dealloc;
@end

