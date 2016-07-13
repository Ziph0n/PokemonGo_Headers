/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USConfigurationInterface.h>

@class NSDictionary, NSString;

@interface USConfigurationBase : NSObject <USConfigurationInterface> {

	NSDictionary* _configurationDictionary;

}

@property (nonatomic,retain) NSDictionary * configurationDictionary;              //@synthesize configurationDictionary=_configurationDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidConfigurationDictionary:(id)arg1 ;
+(id)requiredKeys;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfigurationDictionary:(NSDictionary *)arg1 ;
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(NSDictionary *)configurationDictionary;
@end

