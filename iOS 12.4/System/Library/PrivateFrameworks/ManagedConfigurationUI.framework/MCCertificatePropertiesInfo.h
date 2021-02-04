/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
@class NSArray;

@interface MCCertificatePropertiesInfo : NSObject {

	NSArray* _sections;
	NSArray* _sectionTitles;
	NSArray* _keyValueSections;

}

@property (nonatomic,retain) NSArray * sections;                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * sectionTitles;                 //@synthesize sectionTitles=_sectionTitles - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;              //@synthesize keyValueSections=_keyValueSections - In the implementation block
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)_setup:(id)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(NSArray *)keyValueSections;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
-(void)setSectionTitles:(NSArray *)arg1 ;
-(NSArray *)sections;
-(NSArray *)sectionTitles;
-(void)setSections:(NSArray *)arg1 ;
@end
