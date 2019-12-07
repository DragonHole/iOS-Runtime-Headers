/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSURL;

@interface OCPPackageRelationship : NSObject {

	NSString* mIdentifier;
	NSString* mType;
	int mTargetMode;
	NSURL* mTargetLocation;

}
-(id)type;
-(id)identifier;
-(id)targetLocation;
-(int)targetMode;
-(void)readFromElement:(xmlNode*)arg1 baseLocation:(id)arg2 ;
-(id)initWithXmlElement:(xmlNode*)arg1 baseLocation:(id)arg2 ;
@end
