/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOnboardingCircleView : UIView {
    UIImageView *_backgroundImageView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    UIColor *_fillColor;
    float _minimumDiameter;
    UILabel *_titleLabel;
    int _titlePosition;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic) float minimumDiameter;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) int titlePosition;

- (void).cxx_destruct;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)minimumDiameter;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageAlpha:(float)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFillColor:(id)arg1;
- (void)setMinimumDiameter:(float)arg1;
- (void)setTitlePosition:(int)arg1;
- (id)titleLabel;
- (int)titlePosition;

@end
