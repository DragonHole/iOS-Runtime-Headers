/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class STiCloudOrganization;

@interface STiCloudOrganizationSettings : STCoreOrganizationSettings

@property (nonatomic,retain) STiCloudOrganization * organization; 
-(id)dictionaryRepresentation;
-(void)setPasscode:(id)arg1 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)computeUniqueIdentifier;
@end

