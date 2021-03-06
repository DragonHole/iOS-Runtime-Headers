/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OCPPackageRelationshipCollection, OCPPackageProperties, NSMutableDictionary;

@interface OCPPackage : NSObject {

	OCPPackageRelationshipCollection* mRelationships;
	OCPPackageProperties* mProperties;
	NSMutableDictionary* mDefaultContentTypes;
	NSMutableDictionary* mContentTypeOverrides;

}
-(id)partForLocation:(id)arg1 ;
-(id)contentTypeForPartLocation:(id)arg1 ;
-(void)resetPartForLocation:(id)arg1 ;
-(id)mainDocumentPart;
-(id)relationshipsByType:(id)arg1 ;
-(id)partByRelationshipType:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
-(void)readContentTypesXml:(xmlDoc*)arg1 ;
-(id)initWithRelationshipsXml:(xmlDoc*)arg1 corePropertiesXml:(xmlDoc*)arg2 appPropertiesXml:(xmlDoc*)arg3 contentTypesXml:(xmlDoc*)arg4 ;
-(void)readDefaultContentTypeFromElement:(xmlNode*)arg1 ;
-(void)readContentTypeOverrideFromElement:(xmlNode*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)properties;
@end

